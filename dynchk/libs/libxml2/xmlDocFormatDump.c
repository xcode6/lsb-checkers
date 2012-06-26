// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stdio.h>
#include <libxml2/libxml/tree.h>
#undef xmlDocFormatDump
static int(*funcptr) (FILE * , xmlDocPtr , int ) = 0;

extern int __lsb_check_params;
int xmlDocFormatDump (FILE * arg0 , xmlDocPtr arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlDocFormatDump()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlDocFormatDump", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlDocFormatDump. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlDocFormatDump() - validating");
		validate_RWaddress( arg0, "xmlDocFormatDump - arg0 (f)");
		validate_NULL_TYPETYPE(  arg0, "xmlDocFormatDump - arg0 (f)");
		validate_NULL_TYPETYPE(  arg1, "xmlDocFormatDump - arg1 (cur)");
		validate_NULL_TYPETYPE(  arg2, "xmlDocFormatDump - arg2 (format)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

