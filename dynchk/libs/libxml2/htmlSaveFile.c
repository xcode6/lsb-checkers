// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/HTMLtree.h>
#undef htmlSaveFile
static int(*funcptr) (const char * , xmlDocPtr ) = 0;

extern int __lsb_check_params;
int htmlSaveFile (const char * arg0 , xmlDocPtr arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for htmlSaveFile()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "htmlSaveFile", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load htmlSaveFile. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "htmlSaveFile() - validating");
		validate_Rdaddress( arg0, "htmlSaveFile - arg0 (filename)");
		validate_NULL_TYPETYPE(  arg0, "htmlSaveFile - arg0 (filename)");
		validate_NULL_TYPETYPE(  arg1, "htmlSaveFile - arg1 (cur)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

