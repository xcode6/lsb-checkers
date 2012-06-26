// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stdio.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/HTMLtree.h>
#undef htmlNodeDumpFile
static void(*funcptr) (FILE * , xmlDocPtr , xmlNodePtr ) = 0;

extern int __lsb_check_params;
void htmlNodeDumpFile (FILE * arg0 , xmlDocPtr arg1 , xmlNodePtr arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for htmlNodeDumpFile()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "htmlNodeDumpFile", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load htmlNodeDumpFile. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "htmlNodeDumpFile() - validating");
		validate_RWaddress( arg0, "htmlNodeDumpFile - arg0 (out)");
		validate_NULL_TYPETYPE(  arg0, "htmlNodeDumpFile - arg0 (out)");
		validate_NULL_TYPETYPE(  arg1, "htmlNodeDumpFile - arg1 (doc)");
		validate_NULL_TYPETYPE(  arg2, "htmlNodeDumpFile - arg2 (cur)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

