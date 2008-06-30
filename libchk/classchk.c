#define _GNU_SOURCE
#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include <libgen.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <dlfcn.h>
#include "elfchk.h"
#include "hdr.h"
#include "tetj.h"
#include "libchk.h"

char *
demangle(const char *mangled_name)
{
#if defined(USE_LIBIBERTY_DEMANGLE)
  return cplus_demangle_v3(mangled_name, 
                           DMGL_PARAMS | DMGL_ANSI | DMGL_VERBOSE);
#elif defined(USE_CXXABI_DEMANGLE)
  return __cxa_demangle(mangled_name, NULL, 0, NULL);
#else
  return NULL;
#endif
}

/*
 * Some architectures treat function pointers as structures which contains the
 * address of the function, plus some adjustment value which must be taken into
 * consideration. This is visible in the structures we are using (ie vtables),
 * so we use this function to make the adjustment when neccessary.
 */

void *
fptr2ptr(fptr * fptr)
{
#if defined(__ia64__)
  return fptr->func;
#else
  return (void *) fptr;
#endif
}

void *
fptr2ptrp(fptr * fptr)
{
#if defined(__ia64__)
  return fptr->func;
#else
  return (void *) *fptr;
#endif
}

/*
 * check_class_info() examines the data objects associated with a class. Each
 * class has several data objects associated with it, so each type of object
 * needs to be checked. A set of data structures representing each of these
 * data types is produced from the information stored in the database. This
 * function walks through the table of classs produced from the DB, and checks
 * the shared object to ensure the data objects match with the description
 * from the DB. Note that the data structures that represent the in memory
 * format and the data in the DB are not identicle, but generally contain
 * the same information, just expressed differently.
 * 
 * Note that stuff which is output to stderr is mostly used by the maintainer
 * to facilitate DB updates when mismatches are detected.
 */


#define TMP_STRING_SIZE (PATH_MAX+20)
#define TETJ_REPORT_INFO(MSG, ...) \
  snprintf(tmp_string, TMP_STRING_SIZE, MSG, ##__VA_ARGS__); \
  tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count, 0, 0, 0, tmp_string); \
  fprintf(stderr, "%s\n", tmp_string)
#define TETJ_LOG_INFO(MSG, ...) \
  snprintf(tmp_string, TMP_STRING_SIZE, MSG, ##__VA_ARGS__); \
  tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count, 0, 0, 0, tmp_string);


int
check_class_info(ElfFile * file, char *libname,
		 struct classinfo *classes[], struct tetj_handle *journal)
{
  int i, j, v, k;
  Dl_info dlainfo;
  void *dlhndl;
  void *symp;
  void **basetypes;
  struct classtypeinfo_mem *rttip;
  union classvtable_mem *vtablep;
  void *vttp;
  struct classinfo *classp;
  unsigned long vtvcalloffset, vtbaseoffset;
  const char *vttypeinfo;
  char *expected;
  fptr *vtvirtfuncs;
  int vtableinc, vtablesize, fndvtabsize;
  int fndvttsize;
  char tmp_string[TMP_STRING_SIZE + 1];
  char *demangled_class, *demangled_found, *first_occurrence, *demangled_function;
  int test_failed, test_warning;

  if (classes == NULL)
    return 0;

  tetj_tp_count++;
  snprintf(tmp_string, TMP_STRING_SIZE, "Attempt to dlopen %s", libname);
  tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, tmp_string);
  dlhndl = dlopen(libname, RTLD_LAZY);
  if (dlhndl == NULL) {
    TETJ_REPORT_INFO("Failed to dlopen %s", libname);
    tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count++);
    return 1;
  }

  tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
  tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count++);


  /* Examine each class here */
  for (i = 0; classes[i] != NULL; i++) {
    classp = classes[i];
    if ((libchk_debug & LIBCHK_DEBUG_CLASSDETAILS)) {
      printf("Checking class %s\n", classp->name);
    }

    /*
     * 1) First, check the Vtable info
     */
    if (*classp->vtablename) {
      vtablep = dlsym(dlhndl, classp->vtablename);
      if (vtablep) {
	vtablesize = 0;
	for (v = 0; v < classp->numvirttab; v++) {
	  snprintf(tmp_string, TMP_STRING_SIZE, "%s vtable info", classp->name);
	  tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count,
			     tmp_string);
	  switch (classp->vtable[v].category) {
	  case 1:
	    vtvcalloffset = 0;
	    vtbaseoffset = vtablep->cat1.baseoffset;
	    vttypeinfo = vtablep->cat1.typeinfo;
	    vtvirtfuncs = vtablep->cat1.virtfuncs;
	    vtableinc =
		sizeof(struct cat1vtable_mem) +
		(classp->vtable[v].numvfuncs * sizeof(fptr));
	    tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
	    break;
	  case 2:
	    vtvcalloffset = vtablep->cat2.vcalloffset;
	    vtbaseoffset = vtablep->cat2.baseoffset;
	    vttypeinfo = vtablep->cat2.typeinfo;
	    vtvirtfuncs = vtablep->cat2.virtfuncs;
	    vtableinc =
		sizeof(struct cat2vtable_mem) +
		(classp->vtable[v].numvfuncs * sizeof(fptr));
	    tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
	    break;
	  default:
	    TETJ_REPORT_INFO("Unhandled VT category %d",
			     classp->vtable[v].category);
	    tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
	    break;
	  }
	  tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count++);
	  /*
	   * Move vtablep to the next record in the vtable
	   */
	  vtablesize += vtableinc;
	  vtablep = (void *) (((char *) vtablep) + vtableinc);

	  /*
	   * 1.1) Check the baseoffset
	   */
	  snprintf(tmp_string, TMP_STRING_SIZE, "%s baseoffset", classp->name);
	  tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count,
			     tmp_string);
	  if (vtbaseoffset != classp->vtable[v].baseoffset) {
	    TETJ_REPORT_INFO
		("Vtable[%d] baseoffset %ld (expected) doesn't match %ld "
		 "(found) BASEO:%s:0:%ld", v, classp->vtable[v].baseoffset,
		 vtbaseoffset, classp->name, vtbaseoffset);
	    tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
	  } else {
	    tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
	  }
	  tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count++);

	  /*
	   * 1.2) Check the vcalloffset
	   */
	  snprintf(tmp_string, TMP_STRING_SIZE, "%s vcalloffset", classp->name);
	  tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count,
			     tmp_string);
	  if (vtvcalloffset != classp->vtable[v].vcalloffset) {
	    TETJ_REPORT_INFO
		("Vtable[%d] vcalloffset %ld (expected) doesn't match %ld "
		 "(found) BASEVO:%s:0:%ld", v,
		 classp->vtable[v].vcalloffset, vtvcalloffset,
		 classp->name, vtvcalloffset);
	    tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
	  } else {
	    tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
	  }
	  tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count++);

	  /*
	   * 1.3) Check the pointer to the RTTI, both by value and by name
	   */
	  snprintf(tmp_string, TMP_STRING_SIZE, "%s rtti name", classp->name);
	  tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count,
			     tmp_string);
	  test_failed = 0;

          if (!dladdr(vttypeinfo, &dlainfo)) {
            fprintf(stderr, "Class %s\n", classp->name);
            TETJ_REPORT_INFO
              ("Error looking for RTTI symbol; "
               "expecting %s, got %s",
               classp->vtable[v].typeinfo, dlainfo.dli_sname);
            test_failed = 1;
          }
          else {
	    if ((libchk_debug & LIBCHK_DEBUG_CLASSDETAILS) &&
	        dlainfo.dli_saddr != vttypeinfo) {
	      TETJ_REPORT_INFO("Uhoh1. Not an exact match %p %p",
			     dlainfo.dli_saddr, vttypeinfo);
	      test_failed = 1;
	    }

	    if (strcmp(classp->vtable[v].typeinfo, dlainfo.dli_sname)) {
	      fprintf(stderr, "Class %s\n", classp->name);
	      TETJ_REPORT_INFO
	        ("RTTI Name %s (expected) doesn't match %s (found)",
		 classp->vtable[v].typeinfo, dlainfo.dli_sname);
	      test_failed = 1;
	    }
          }

	  tetj_result(journal, tetj_activity_count, tetj_tp_count,
		      test_failed ? TETJ_FAIL : TETJ_PASS);
	  tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count++);

	  /*
	   * 1.4) Check the virtual function pointers
	   */
	  snprintf(tmp_string, TMP_STRING_SIZE, "%s virtual function pointers",
		   classp->name);
	  tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count,
			     tmp_string);
	  test_failed = 0;
	  test_warning = 0;
	  for (j = 0; j < classp->vtable[v].numvfuncs; j++) {
/*	    printf("checking vtable[%d] %s\n", j, classp->vtable[v].virtfuncs[j]); */
	    /*
	     * Look up the name of the symbol associated with the funcptr
	     * found in the vtable.
	     */
	    memset(&dlainfo, 0, sizeof(dlainfo));
	    if (!dladdr(fptr2ptrp(&vtvirtfuncs[j]), &dlainfo)) {
	      fprintf(stderr, "Class %s\n", classp->name);
	      TETJ_REPORT_INFO
		  ("Error looking for symbol for Virtual table entry "
		   "[%d][%d](%p) expecting %s, got %s", v, j,
		   fptr2ptrp(&vtvirtfuncs[j]), classp->vtable[v].virtfuncs[j], dlainfo.dli_sname);
	      test_failed = 1;
	    }
#ifdef DEBUG
	    if (classp->vtable[v].virtfuncs[j][0]) {
	      symp = dlsym(dlhndl, classp->vtable[v].virtfuncs[j]);
	      if (symp != fptr2ptrp(&vtvirtfuncs[j])) {
		Dl_info dlainfo2;
		int s;
		for (s = 0; s < 12; s++) {
		  memset(&dlainfo2, 0, sizeof(dlainfo2));
                  if (!dladdr(fptr2ptrp(&vtvirtfuncs[s]), &dlainfo2)) {
                    fprintf(stderr, "Error looking for symbol for vtable[%d] entry", s);
                  }
                  else {
		      fprintf(stderr, "vtable[%d] %p %s\n", s, vtvirtfuncs[s],
			    dlainfo2.dli_sname);
		  }
                }
		memset(&dlainfo2, 0, sizeof(dlainfo2));
		fprintf(stderr, "Class %s\n", classp->name);

                if (!dladdr(symp, &dlainfo2)) {
                  TETJ_REPORT_INFO
                      ("Error looking for symbol for Virtual table entry "
                       "[%d][%d](%p) expecting %s, got %s", v, j,
                       fptr2ptrp(&vtvirtfuncs[j]), classp->vtable[v].virtfuncs[j], dlainfo2.dli_sname);
                  test_failed = 1;
                } else {
		  TETJ_REPORT_INFO("Symbol address for Virtual table entry "
				   "[%d][%d] %s is not expected", v, j,
				   classp->vtable[v].virtfuncs[j]);
		  fprintf(stderr,
			"%p doesn't match %p which appears to be %s %p\n",
			symp, fptr2ptrp(&vtvirtfuncs[j]),
			dlainfo2.dli_sname, dlainfo2.dli_saddr);
		  test_failed = 1;
	        }
	      }
            }
#endif

	    /*
	     * 1.4.1) Make sure we found a named symbol at all.
	     */
	    if (!dlainfo.dli_saddr && classp->vtable[v].virtfuncs[j][0] && strncmp(classp->vtable[v].virtfuncs[j], "NULL or", 7) ) {
	      fprintf(stderr, "Class %s\n", classp->name);
	      TETJ_REPORT_INFO
		  ("Did not find symbol addr for Virtual table entry "
		   "[%d][%d] expecting %s", v, j,
		   classp->vtable[v].virtfuncs[j]);
	      test_failed = 1;
	    }

	    /*
	     * 1.4.2) Check to see if the symbol found is an exact match
	     * for the funcptr that was used for the lookup.
	     */
	    if (dlainfo.dli_saddr &&
		(fptr2ptr(((fptr *) dlainfo.dli_saddr)) !=
		 fptr2ptrp(&vtvirtfuncs[j]))) {
	      if ((!libchk_debug & LIBCHK_DEBUG_CXXHUSH)) {
		printf("Uhoh2. Not an exact match %p %p\n",
		       dlainfo.dli_saddr, fptr2ptrp(&vtvirtfuncs[j]));
		printf("Uhoh2. Not an exact match %s %s\n",
		       dlainfo.dli_sname, classp->vtable[v].virtfuncs[j]);
	      }
	      fprintf(stderr, "Class %s\n", classp->name);
	      TETJ_REPORT_INFO
		  ("Symbol address found for Virtual table entry [%d][%d] "
		   "%p (found) doesn't match %p (expected)", v, j,
		   fptr2ptr(((fptr *) dlainfo.dli_saddr)),
		   fptr2ptrp(&vtvirtfuncs[j]));
	      test_failed = 1;
	    }

	    /*
	     * 1.4.3) Make sure we found a named symbol at all.
	     */
	    if (!dlainfo.dli_sname && classp->vtable[v].virtfuncs[j][0] && strncmp(classp->vtable[v].virtfuncs[j], "NULL or", 7) ) {
	      fprintf(stderr, "Class %s\n", classp->name);
	      TETJ_REPORT_INFO
		  ("Did not find symbol name for Virtual table entry "
		   "[%d][%d] expecting %s", v, j,
		   classp->vtable[v].virtfuncs[j]);
	      test_failed = 1;
	    }

	    /*
	     * 1.4.4) Check to see if the symbol name found matches what we
	     * are expecting to find
	     */
	    // First, extract real symbol name - remove leading 'NULL or ', if any
	    if( !strncmp(classp->vtable[v].virtfuncs[j], "NULL or", 7) ) {
		expected = (char*)malloc( sizeof(char)*(strlen(classp->vtable[v].virtfuncs[j]) - 6) );
		for( k=8; k < strlen(classp->vtable[v].virtfuncs[j]); k++ ) {
		    expected[k-8] = classp->vtable[v].virtfuncs[j][k];
		}
		expected[k-8] = '\0';
	    }
	    else {
		expected = (char*)malloc( sizeof(char)*(strlen(classp->vtable[v].virtfuncs[j]) + 1 ) );
		strcpy( expected, classp->vtable[v].virtfuncs[j] );
	    }
	    
	    if (((classp->vtable[v].virtfuncs[j] && dlainfo.dli_sname) &&
		 strcmp(expected, dlainfo.dli_sname))
		 //strcmp(classp->vtable[v].virtfuncs[j], dlainfo.dli_sname))
		|| (dlainfo.dli_sname && !classp->vtable[v].virtfuncs[j])) {
	      fprintf(stderr, "Class %s\n", classp->name);
	      TETJ_REPORT_INFO("Virtual Function[%d][%d] %s (expected) "
			       "doesn't match %s (found)", v,
			       j, classp->vtable[v].virtfuncs[j],
			       dlainfo.dli_sname);

              /*
               * This could be an override, which doesn't break binary
               * compatibility.  Check some common cases for that.
               * We assume the test fails unless we find evidence to
               * the contrary.
               */
              test_failed = 1;
              demangled_class = demangle(classp->name);
              demangled_found = demangle(dlainfo.dli_sname);
              if (demangled_class == NULL) {
                TETJ_REPORT_INFO("Could not demangle class name");
              } else if (demangled_found == NULL) {
                TETJ_REPORT_INFO("Could not demangle found function name");
                free(demangled_class);
              } else {
                /* If the found class matches the class name, assume
                   we have a new override from a base class. */
                if (strlen(demangled_found) > strlen(demangled_class)) {
                  if (strncmp(demangled_found, demangled_class,
                              strlen(demangled_class)) == 0) {
                    TETJ_REPORT_INFO("Unmangled class: %s", demangled_class);
                    TETJ_REPORT_INFO("Unmangled found function: %s", demangled_found);
                    TETJ_REPORT_INFO("Unmangled function's class matches tested class");
                    test_failed = 0;
		     test_warning = 1;
                  }
                }

                /* Check one more possible situation - a function that was virtual in some of
                   base classes and was implemented here may now have implementation in base
                   class, not in this one. Here is a simple and not perfect workaround; it would be better
                   to provide classchk with inheritance information. */
                if( test_failed == 1 ) {
                  if( strcmp(classp->vtable[v].virtfuncs[j], "__cxa_pure_virtual") == 0 ) {
                    TETJ_REPORT_INFO("A pure virtual function has now implementation: %s", demangled_found);
                    test_failed = 0;
		    test_warning = 1;
                  }
                  else {
                    demangled_function = demangle( expected );
                    if( demangled_function == NULL ) {
                      TETJ_REPORT_INFO("Could not demangle virtual function name");
                    }
                    else {
                      first_occurrence = strrchr( demangled_function, ':' ) + 2*sizeof(char);
                      if( first_occurrence != NULL ) {
                        if( strstr( demangled_found, first_occurrence ) != NULL ) {
                          TETJ_REPORT_INFO("Unmangled expected function: %s", demangled_function);
                          TETJ_REPORT_INFO("Unmangled found function: %s", demangled_found);
                          TETJ_REPORT_INFO("Found function name matches expected function name");
                          test_failed = 0;
                          test_warning = 1;
                        }
                      }

                      free( demangled_function );
                    }
                  }
                }		   
		   
                free(demangled_class);
                free(demangled_found);
              }
	    }
	    
	    free( expected );
	  }

         if( test_warning ) {
            tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_WARNING);
         }
         else {
	    tetj_result(journal, tetj_activity_count, tetj_tp_count,
		        test_failed ? TETJ_FAIL : TETJ_PASS);
	  }
	  tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count++);
	}
	/*
	 * 1.5) Check the vtable size
	 */
	fndvtabsize = get_size(file, classp->vtablename);
	snprintf(tmp_string, TMP_STRING_SIZE, "%s vtable size", classp->name);
	tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count,
			   tmp_string);
	if (vtablesize != fndvtabsize) {
	  fprintf(stderr, "Class %s\n", classp->name);
	  TETJ_REPORT_INFO
	      ("Vtable[%d] size %d (expected) doesn't match %d "
	       "(found) VTSIZE:%s:0:%d", v, vtablesize, fndvtabsize,
	       classp->name, vtablesize);
	  tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
	} else {
	  tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
	}
	tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count++);

      } /* (vtablep) */
      else {
	snprintf(tmp_string, TMP_STRING_SIZE, "%s vtable info", classp->name);
	tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count,
			   tmp_string);
	TETJ_REPORT_INFO("No vtable found in library for %s", classp->name);
	tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
	tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count++);
      }
    } /* (*classp->vtablename) */
    else {
      if ((libchk_debug & LIBCHK_DEBUG_CLASSDETAILS)) {
	printf("No vtable name for %s\n", classp->name);
      }
    }

    /*
     * 2) Second, check the RTTI info
     */
    snprintf(tmp_string, TMP_STRING_SIZE, "%s rtti info", classp->name);
    tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count,
		       tmp_string);
    rttip = dlsym(dlhndl, classp->rttiname);

    if (rttip) {
      /* Rtti info exists */
      tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
      tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count++);

      /*
       * 2.1) Check the Vtable of the base class
       */
      snprintf(tmp_string, TMP_STRING_SIZE, "%s vtable of base class",
	       classp->name);
      tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count,
		         tmp_string);
      symp = dlsym(dlhndl, classp->typeinfo->basevtable);
      if (symp + (2 * sizeof(long)) != rttip->basevtable) {
        if (!dladdr(rttip->basevtable - 8, &dlainfo)) {
          TETJ_REPORT_INFO
              ("Error looking for base vtype for %p %s (expected)", symp, classp->basename);
          test_failed = 1;
        }
        else {
	  if ((libchk_debug & LIBCHK_DEBUG_CLASSDETAILS) &&
	      (vtablep && dlainfo.dli_saddr != vttypeinfo)) {
	    printf("Uhoh3. Not an exact match\n");
	  }
	  TETJ_REPORT_INFO
	      ("Base vtype for %p %s (expected) doesn't match %p %s (found)", symp,
	       classp->typeinfo->basevtable, rttip->basevtable, dlainfo.dli_sname);
	  tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
        }
      } else {
	tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
      }
      tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count++);

      /*
       * 2.2) Check the Name string for the type
       */
      /*
       * We store the class name as _Zfoo, so we need to
       * skip the _Z when comparing against the name is the object.
       */
      snprintf(tmp_string, TMP_STRING_SIZE, "%s name string for type",
	       classp->name);
      tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count,
			 tmp_string);
      if (strcmp(&(classp->name[2]), rttip->name)) {
	TETJ_REPORT_INFO
	    ("Class name %s (found) doesn't match %s (expected)",
	     rttip->name, classp->name);
	tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
      } else {
	tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
      }
      tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count++);

      /*
       * 2.3) Check the Rest of the RTTI fields
       *
       * There are 5 different possible base types, each one implies a
       * different RTTI layout. Here we have to identify each one, and
       * check the fields that are unique to each one.
       */
      snprintf(tmp_string, TMP_STRING_SIZE, "%s remaining rtti fields",
	       classp->name);
      tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count,
			 tmp_string);
      test_failed = 0;
      basetypes = NULL;
      /*
       * abi::__fundamental_type_info
       */
      if (strcmp(classp->typeinfo->basevtable,
		 "_ZTVN10__cxxabiv123__fundamental_type_infoE") == 0) {
	/*
	 * No additional fields to check
	 */
	basetypes = rttip->basetypeinfo;
/*	if( classp->numbaseinfo ) */
/*	  fprintf(stderr,"fundamental_type_info & baseinfos\n"); */
      }
      /*
       * abi::__class_type_info
       */
      if (strcmp(classp->typeinfo->basevtable,
		 "_ZTVN10__cxxabiv117__class_type_infoE") == 0) {
	/*
	 * No additional fields to check
	 */
	basetypes = rttip->basetypeinfo;
/*	if( classp->numbaseinfo ) */
/*	  fprintf(stderr,"class_type_info & baseinfos\n"); */
      }
      /*
       * abi::__si_class_type_info
       */
      if (strcmp(classp->typeinfo->basevtable,
		 "_ZTVN10__cxxabiv120__si_class_type_infoE") == 0) {
	struct si_classtypeinfo_mem *si_rttip;

	si_rttip = (struct si_classtypeinfo_mem *) rttip;
	/*
	 * Check the basename.
	 */
	symp = dlsym(dlhndl, classp->basename);
        if (!dladdr(si_rttip->basetype, &dlainfo)) {
          TETJ_REPORT_INFO
              ("Error looking for basename entry; expected %p %s", symp, classp->basename);
          test_failed = 1;
        }
        else if (symp != si_rttip->basetype) {
	  TETJ_REPORT_INFO
	      ("Base type %p %s (expected) doesn't match %p %s (found)", symp, classp->basename,
	       si_rttip->basetype, dlainfo.dli_sname);
	  test_failed = 1;
	}
	basetypes = rttip->basetypeinfo;
/*	if( classp->numbaseinfo ) */
/*	  fprintf(stderr,"si_class_type_info & baseinfos\n"); */
      }
      /*
       * abi::__vmi_class_type_info
       */
      if (strcmp(classp->typeinfo->basevtable,
		 "_ZTVN10__cxxabiv121__vmi_class_type_infoE") == 0) {
	struct vmi_classtypeinfo_mem *vmi_rttip;
	struct base_type_info_mem *btip;

	vmi_rttip = (struct vmi_classtypeinfo_mem *) rttip;
	/*
	 * Three additional fields to check
	 */
	if (vmi_rttip->flags & (~_vmi_all_mask)) {
	  TETJ_REPORT_INFO("VMI flags %u (found) for class %s "
			   "are not a legal value",
			   vmi_rttip->flags, classp->name);
	  test_failed = 1;
	}
	if (vmi_rttip->flags != classp->flags) {
	  TETJ_REPORT_INFO("VMI flags %u (found) for class %s "
			   "doesn't match %u (expected)",
			   vmi_rttip->flags, classp->name, classp->flags);
	  test_failed = 1;
	}

	if (vmi_rttip->base_count != classp->numvmitypes) {
	  TETJ_REPORT_INFO
	      ("Number of VMI basetypes %d (found) for class %s "
	       "doesn't match %d (expected)", vmi_rttip->base_count,
	       classp->name, classp->numvmitypes);
	  test_failed = 1;
	}
	for (j = 0; j < classp->numvmitypes; j++) {
	  btip = &(vmi_rttip->base_info[j]);
	  symp = dlsym(dlhndl, classp->btinfo[j].base_type);
    /* It seems that we don't use the results of this dladdr */
/*        if (!dladdr(btip->base_type, &dlainfo)) {
            TETJ_REPORT_INFO
              ("Error looking for VMI basetype[%d] address %p (found) for class "
               "%s doesn't match %p (expected)", j, symp, classp->name,
               btip->base_type);
            test_failed = 1;
          }
          else*/ if (symp != btip->base_type) {
	    TETJ_REPORT_INFO
		("VMI basetype[%d] address %p (found) for class "
		 "%s doesn't match %p (expected)", j, symp, classp->name,
		 btip->base_type);
	    test_failed = 1;
	  }
	  if ((btip->
	       offset_flags & ((1 << _base_offset_shift) -
			       1)) & (~_base_all_mask)) {
	    TETJ_REPORT_INFO
		("VMI base type flags %lu (found) for class %s "
		 "are not a legal value", btip->offset_flags, classp->name);
	    test_failed = 1;
	  }
	  if (btip->offset_flags != classp->btinfo[j].offset_flags) {
	    TETJ_REPORT_INFO
		("VMI basetype[%d] flags %lx (found) for class "
		 "%s doesn't match %lx (expected)", j, btip->offset_flags,
		 classp->name, classp->btinfo[j].offset_flags);
	    test_failed = 1;
	  }
	}
	basetypes = (void **) ((char *) vmi_rttip->base_info) +
	    (vmi_rttip->base_count * sizeof(struct base_type_info_mem));
/*	if( classp->numbaseinfo ) */
/*	  fprintf(stderr,"vmi_classtpye & baseinfos\n"); */
      }
      /*
       * abi::__pbase_type_info
       */
      if (strcmp(classp->typeinfo->basevtable,
		 "_ZTVN10__cxxabiv119__pointer_type_infoE") == 0) {
	struct pbasetypeinfo_mem *p_rttip;

	p_rttip = (struct pbasetypeinfo_mem *) rttip;
	/*
	 * Two additional fields to check
	 */
	/*
	 * Check the basename.
	 */
	symp = dlsym(dlhndl, classp->basename);
        if (!dladdr(p_rttip->pointee, &dlainfo)) {
          TETJ_REPORT_INFO
              ("Error looking for base type; expected %p %s ", symp, classp->basename);
          test_failed = 1;
        }
        else if (symp != p_rttip->pointee) {
	  TETJ_REPORT_INFO
	      ("Base type %p %s (expected) doesn't match %p %s (found)", symp, classp->basename,
	       p_rttip->pointee, dlainfo.dli_sname);
	  test_failed = 1;
	}
	if (p_rttip->offset_flags & (~_pbase_all_mask)) {
	  TETJ_REPORT_INFO("pointer offset flags %x (found) for class %s "
			   "not a legal value",
			   p_rttip->offset_flags, classp->name);
	  test_failed = 1;
	}
	if (p_rttip->offset_flags != classp->flags) {
	  TETJ_REPORT_INFO("pointer offset flags %x (found) for class %s "
			   "doesn't match %x (expected)",
			   p_rttip->offset_flags, classp->name, classp->flags);
	  test_failed = 1;
	}
	basetypes = ((struct pbasetypeinfo_mem *) rttip)->basetypeinfo;
/*	if( classp->numbaseinfo ) */
/*	  fprintf(stderr,"pbase_type_info & baseinfos\n"); */
      }
      tetj_result(journal, tetj_activity_count, tetj_tp_count,
		  test_failed ? TETJ_FAIL : TETJ_PASS);
      tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count++);

      /*
       * Check the base types info
       */
      snprintf(tmp_string, TMP_STRING_SIZE, "%s basetypes existence",
	       classp->name);
      tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count,
			 tmp_string);
      if (classp->numbaseinfo && !basetypes) {
	TETJ_REPORT_INFO("Aigghhh no basetypes!!");
	tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
	tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count++);
      } else {
	tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
	tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count++);

	test_failed = 0;
	snprintf(tmp_string, TMP_STRING_SIZE, "%s base type info",classp->name);
	tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count,
			   tmp_string);
	for (j = 0; j < classp->numbaseinfo; j++) {
	  symp = dlsym(dlhndl, classp->typeinfo->basetypeinfo[j]);
          if (!dladdr(basetypes[j] - 8, &dlainfo)) {
            TETJ_REPORT_INFO
                ("Error looking for basetype[%d]; expected %p (%s)", j,
                symp, classp->typeinfo->basetypeinfo[j]);
            test_failed = 1;
          }
          else {
	    if ((libchk_debug & LIBCHK_DEBUG_CLASSDETAILS) &&
	        dlainfo.dli_saddr + 8 != basetypes[j]) {
	      printf("Uhoh4. Not an exact match %p %p\n",
		   dlainfo.dli_saddr, basetypes[j]);
	    }
	    if (symp != basetypes[j]) {
	      TETJ_REPORT_INFO
		("Basetype[%d] %p (%s) (expected) doesn't match %p (%s) (found)", j,
		 symp, classp->typeinfo->basetypeinfo[j], basetypes[j], dlainfo.dli_sname);
	      test_failed = 1;
	    }
	  }
        }
	tetj_result(journal, tetj_activity_count, tetj_tp_count,
		    test_failed ? TETJ_FAIL : TETJ_PASS);
	tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count++);
      }
    } else {			/* (rttip) */
      if (strlen(classp->rttiname) != 0) {
	/*
	 * We really were expecting an RTTI symbol to be found
	 */
	TETJ_REPORT_INFO("Did not find expected RTTI symbol %s",
			 classp->rttiname);
	tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
	tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count++);
      } else {
	/*
	 * We have an empty symbol name, indicating we were not expecting
	 * to find a symbol anyway.
	 *
	 * Don't complain about this.
	 char   str[256];
	 sprintf(str, "_ZTI%s", &(classp->name[2]));
	 TETJ_REPORT_INFO("No RTTI name for %s", str);
	 tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
	 tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count++);
	 */
	/* bug 1601: "don't complain" means we have to record a PASS */
	tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
	tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count++);
      }
    }

    /*
     * 3) Third, check the VTT info
     */
    snprintf(tmp_string, TMP_STRING_SIZE, "%s vtt existence", classp->name);
    tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count,
		       tmp_string);
    vttp = dlsym(dlhndl, classp->vttname);

    if (vttp) {
      /* VTT info exists */
      if (classp->numvtt) {
	/* and we were expecting it */
	TETJ_LOG_INFO("Found VTT for %s", classp->name);
	tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
      } else {
	/* and we were NOT expecting it */
	TETJ_REPORT_INFO("Found unexpected VTT for %s", classp->name);
	tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
      }
      tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count++);

      /* 3.1 Check the VTT size */
      snprintf(tmp_string, TMP_STRING_SIZE, "%s vtt size", classp->name);
      tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count,
			 tmp_string);
      fndvttsize = get_size(file, classp->vttname);
      if (fndvttsize == (classp->numvtt * sizeof(void *))) {
	TETJ_LOG_INFO("VTT Size matched for %s", classp->vttname);
	tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
      } else {
	TETJ_REPORT_INFO
	    ("VTT Size mismatch for %s. Expecting %d, found %d",
	     classp->vttname, (classp->numvtt * sizeof(void *)), fndvttsize);
	tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
      }
      tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count++);
    } else {
      /* VTT info does NOT exists */
      if (classp->numvtt) {
	/* and we were expecting it */
	TETJ_REPORT_INFO("Did not find expected VTT for %s", classp->name);
	tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
      } else {
	/* and we were NOT expecting it */
	TETJ_LOG_INFO("Did not find unexpected VTT for %s", classp->name);
	tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
      }
      tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count++);
    }
  }

  dlclose(dlhndl);
  return 0;
}
