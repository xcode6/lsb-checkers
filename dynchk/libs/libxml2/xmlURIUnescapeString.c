// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/uri.h>
#undef xmlURIUnescapeString
static char *(*funcptr) (const char * , int , char * ) = 0;

extern int __lsb_check_params;
char * xmlURIUnescapeString (const char * arg0 , int arg1 , char * arg2 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlURIUnescapeString()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlURIUnescapeString", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlURIUnescapeString. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlURIUnescapeString() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "xmlURIUnescapeString - arg0 (str)");
		}
		validate_NULL_TYPETYPE(  arg0, "xmlURIUnescapeString - arg0 (str)");
		validate_NULL_TYPETYPE(  arg1, "xmlURIUnescapeString - arg1 (len)");
		if( arg2 ) {
		validate_RWaddress( arg2, "xmlURIUnescapeString - arg2 (target)");
		}
		validate_NULL_TYPETYPE(  arg2, "xmlURIUnescapeString - arg2 (target)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

