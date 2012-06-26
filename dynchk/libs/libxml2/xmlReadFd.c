// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/parser.h>
#undef xmlReadFd
static xmlDocPtr(*funcptr) (int , const char * , const char * , int ) = 0;

extern int __lsb_check_params;
xmlDocPtr xmlReadFd (int arg0 , const char * arg1 , const char * arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	xmlDocPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlReadFd()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlReadFd", "LIBXML2_2.6.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlReadFd. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlReadFd() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlReadFd - arg0 (fd)");
		validate_Rdaddress( arg1, "xmlReadFd - arg1 (URL)");
		validate_NULL_TYPETYPE(  arg1, "xmlReadFd - arg1 (URL)");
		validate_Rdaddress( arg2, "xmlReadFd - arg2 (encoding)");
		validate_NULL_TYPETYPE(  arg2, "xmlReadFd - arg2 (encoding)");
		validate_NULL_TYPETYPE(  arg3, "xmlReadFd - arg3 (options)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

