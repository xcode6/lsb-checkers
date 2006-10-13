#include <stdio.h>
#include <getopt.h>
#include <string.h>
#include <stdlib.h>
#include <libgen.h>
#include <limits.h>
#include "../tetj/tetj.h"
#include "check_file.h"
#include "libraries.h"
#include "symbols.h"
#include "output.h"


char *
concat_string(char *input, char *addition)
{
    char *tmp;
    if (input) { 
	tmp = realloc(input, strlen(input) + strlen(addition) + 1);
	if (!tmp)
	    abort();
	return strcat(tmp, addition);
    } else {
	return strdup(addition);
    }
}

/* Real CVS revision number so we can strings it from the binary if necessary */
static const char *__attribute((unused)) appchk_revision =
    "$Revision: 1.34 $";

void
usage(char *progname)
{
  printf("usage: %s [options] appname ...\n"
"  -h, --help                     show this help message and exit\n"
"  -v, --version                  show version and LSB version\n"
"  -j, --journal                  write a journal file\n"
"  -n, --no-journal               do not write a journal file\n"
//"  -T, --lsb-product=[core|desktop]\n"
//"                                 target product to load modules for\n"
"  -M MODULE, --module=MODULE     add MODULE to list of checked modules\n"
"  -L LIB                         add LIB to list of checked libraries\n"
"  -o FILE, --output-file=FILE    write output to FILE\n",
progname);
}

int
main(int argc, char *argv[])
{
    ElfFile *elffile;
    char *command_line = NULL;
    int i;
    char *extra_libraries;
    char **extra_lib_list = NULL;
    int extra_lib_count = 0;
#define TMP_STRING_SIZE (PATH_MAX+20)
    char tmp_string[TMP_STRING_SIZE + 1];
    char output_filename[TMP_STRING_SIZE + 1];
    int modules = 0;
    int option_index = 0;


/* Ignore LSB_PRODUCT env variable for LSB 3.1
    char *s = getenv("LSB_PRODUCT");
    if(s) {
        if(strcasecmp(s, "core") == 0)
            modules = LSB_Core | LSB_Graphics | LSB_Cpp;
        else if(strcasecmp(s, "desktop") == 0 || strcasecmp(s, "all") == 0)
            modules = LSB_All_Modules;
        else {
            printf("warning: env var LSB_PRODUCT specifies an invalid product, ignoring it.\n");
            modules = LSB_Core | LSB_Graphics | LSB_Cpp;
        }
    } else
        modules = LSB_Core | LSB_Graphics | LSB_Cpp;
*/
    modules = LSB_Desktop_Modules;   // default to all modules in cert program
    extra_libraries = strdup("EXTRA_LIBRARIES=");

    /* Set defaults. */
    do_journal = 0;
    output_filename[0] = '\0';

    for (i = 0; i < argc; i++) {
	command_line = concat_string(command_line, argv[i]);
	command_line = concat_string(command_line, " ");
    }

    while (1) {
	int c;
	static struct option long_options[] = {
	    {"help",     no_argument,          NULL, 'h'},
	    {"version",  no_argument,          NULL, 'v'},
	    {"journal",  no_argument,          NULL, 'j'},
            {"no-journal", no_argument,        NULL, 'n'},
	    {"output-file", required_argument, NULL, 'o'},
	    {"module",   required_argument,    NULL, 'M'},
	    {"lsb-product", required_argument, NULL, 'T'},
	    {0, 0, 0, 0}
      };

      c = getopt_long (argc, argv, "hnjvAo:M:L:T:", 
                       long_options, &option_index);
      if (c == -1)
	  break;
      switch (c) {
	  case 'h':
	      usage(argv[0]);
	      exit (0);
	  case 'v':
	      printf("%s %s for LSB Specification %s\n", argv[0],
		     LSBAPPCHK_VERSION, LSBVERSION);
	      break;
	   case 'T':
/* Ignore -T completely for LSB 3.1
	      if(strcasecmp(optarg, "core") == 0)
		modules = LSB_Core | LSB_Graphics | LSB_Cpp;
	      else if(strcasecmp(optarg, "desktop") == 0 || strcasecmp(optarg, "all") == 0)
		modules = LSB_All_Modules;
	      else {
		printf("product '%s' is not valid!\n", optarg);
		usage(argv[0]);
		exit(1);
	      }
*/
	      break;
	  case 'M':
	      modules |= getmoduleval(optarg);
	      printf("also checking symbols in module %s\n", optarg);
	      break;
	  case 'L':
	      printf("Adding symbols for library %s\n", optarg);
	      extra_lib_count++;
	      extra_lib_list = realloc(extra_lib_list, 
				       sizeof(char *)*extra_lib_count);
	      extra_lib_list[extra_lib_count-1] = strdup(optarg);
	      extra_libraries = concat_string(extra_libraries, optarg);
	      extra_libraries = concat_string(extra_libraries, " ");
	      break;
          case 'o':
              snprintf(output_filename, TMP_STRING_SIZE, optarg);
              break;
	  case 'j':
              do_journal = 1;
	      break;
          case 'n':
              do_journal = 0;
              break;
	  default:
	      usage(argv[0]);
	      exit (0);
	}
    }
    if (optind >= argc && !extra_lib_count) {
	usage(argv[0]);
	exit (1);
    }

    /* Start journal logging */
    if (do_journal) {
        if (output_filename[0] == '\0') {
            if (optind >= argc && extra_lib_count) {
                /* No binary supplied on command line */
                if (extra_lib_count == 1) {
                    snprintf(output_filename, TMP_STRING_SIZE, "journal.appchk.%s",
                             basename(extra_lib_list[0]));
                } else {
                    snprintf(output_filename, TMP_STRING_SIZE, "journal.appchk.DSO");
                }
            } else {
                snprintf(output_filename, TMP_STRING_SIZE, "journal.appchk.%s",
                         basename(argv[optind]));
            }
        }

        if (tetj_start_journal(output_filename, &journal, command_line) != 0) {
            snprintf(tmp_string, TMP_STRING_SIZE, "Could not open journal file %s",
                     output_filename);
            perror(tmp_string);
            printf("Use -o FILE to specify an alternate location for the journal file\n");
            exit(1);
        }

        /*
         * new journal standard requires arch in the
         * VSX_NAME line in order to fetch waiver files correctly
         */
        snprintf(tmp_string, TMP_STRING_SIZE,
                 "VSX_NAME=lsbappchk %s (%s)", LSBAPPCHK_VERSION, tetj_arch);
        tetj_add_config(journal, tmp_string);
        snprintf(tmp_string, TMP_STRING_SIZE, "LSB_VERSION=%s", LSBVERSION);
        tetj_add_config(journal, tmp_string);
        snprintf(tmp_string, TMP_STRING_SIZE, "LSB_MODULES=%s",
                 getmodulename(modules));
        tetj_add_config(journal, tmp_string);

        /* Log extra libraries to look for symbols in */
        if (extra_lib_count)
            tetj_add_config(journal, extra_libraries);
    }

    /* Or, if no journal logging, set up report output. */
    else {
        if (output_filename[0] == '\0') {
            output_use(stdout);
        } else {
            output_open(output_filename);
        }

        /* XXX: Open a fake journal file.  Needed only while we
           transition to the new macros. */
        tetj_start_journal("/dev/null", &journal, command_line);
    }

    /* Add all extra libs to DT_NEEDED list */
    for (i = 0; i < extra_lib_count; i++)
	addDTNeeded(extra_lib_list[i]);

    /* Add symbols from extra libs to list */
    for (i = 0; i < extra_lib_count; i++) {
	tetj_testcase_start(journal, tetj_activity_count, extra_lib_list[i],"");
	tetj_tp_count = 0;
	elffile = OpenElfFile(extra_lib_list[i]);
	if (elffile == NULL) {
	    /* make a dummy container if it failed to open */
	    snprintf(tmp_string, TMP_STRING_SIZE, "Opening lib %s",
	                                          extra_lib_list[i]);
	    tetj_purpose_start(journal, tetj_activity_count, ++tetj_tp_count,
			       tmp_string);
	    snprintf(tmp_string, TMP_STRING_SIZE, "Could not open %s",
	                                           extra_lib_list[i]);
	    /* error already printed by call:
	    perror(tmp_string);
	    */
	    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count, 
		               0, 0, 0, tmp_string);
	    tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
	    tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
	    tetj_testcase_end(journal, tetj_activity_count++, 0, "");
	    continue;
	}
	check_file(elffile, journal, ELF_IS_DSO);
	add_library_symbols(elffile, journal, modules);
	tetj_testcase_end(journal, tetj_activity_count++, 0, "");
	CloseElfFile(elffile);
    }

    /* Check all extra libs */
    for (i = 0; i < extra_lib_count; i++) {
	snprintf(tmp_string, TMP_STRING_SIZE, "%s-pass2", extra_lib_list[i]);
	tetj_testcase_start(journal, tetj_activity_count, tmp_string,"");
	tetj_tp_count = 0;

	elffile = OpenElfFile(extra_lib_list[i]);
	if (elffile == NULL) {
	    /* make a dummy container if it failed to open */
	    snprintf(tmp_string, TMP_STRING_SIZE, "Opening lib %s",
	                                           extra_lib_list[i]);
	    tetj_purpose_start(journal, tetj_activity_count, ++tetj_tp_count,
			       tmp_string);
	    snprintf(tmp_string, TMP_STRING_SIZE, "Could not open %s",
	                                           extra_lib_list[i]);
	    /* error already printed by call:
	    perror(tmp_string);
	    */
	    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count, 
		               0, 0, 0, tmp_string);
	    tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
	    tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
	    tetj_testcase_end(journal, tetj_activity_count++, 0, "");
	    continue;
	}
	check_lib(elffile, journal, ELF_IS_DSO, modules);
	tetj_testcase_end(journal, tetj_activity_count++, 0, "");
	CloseElfFile(elffile);
    }

    /* Check binary */
    for (i = optind; i < argc; i++) {
	printf("Checking binary %s\n", argv[i]);
	tetj_testcase_start(journal, tetj_activity_count, argv[i], "");
	tetj_tp_count = 0;

	elffile = OpenElfFile(argv[i]);
	if (elffile == NULL) {
	    /* make a dummy container if it failed to open */
	    snprintf(tmp_string, TMP_STRING_SIZE, "Opening binary %s", argv[i]);
	    tetj_purpose_start(journal, tetj_activity_count, ++tetj_tp_count,
			       tmp_string);
	    snprintf(tmp_string, TMP_STRING_SIZE, "Could not open %s", argv[i]);
	    /* error already printed by call:
	    perror(tmp_string);
	    */
	    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count, 
		               0, 0, 0, tmp_string);
	    tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
	    tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
	    tetj_testcase_end(journal, tetj_activity_count++, 0, "");
	    continue;
	}
	check_file(elffile, journal, ELF_IS_EXEC);
	checksymbols(elffile, journal, modules);
	tetj_testcase_end(journal, tetj_activity_count++, 0, "");
	CloseElfFile(elffile);
    }
    tetj_close_journal(journal);
    exit(0);
}
