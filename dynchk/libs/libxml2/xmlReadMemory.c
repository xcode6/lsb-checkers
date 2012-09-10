// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/parser.h>
#undef xmlReadMemory
static xmlDocPtr(*funcptr) (const char * , int , const char * , const char * , int ) = 0;

extern int __lsb_check_params;
xmlDocPtr xmlReadMemory (const char * arg0 , int arg1 , const char * arg2 , const char * arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	xmlDocPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlReadMemory()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlReadMemory", "LIBXML2_2.6.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlReadMemory. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlReadMemory() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "xmlReadMemory - arg0 (buffer)");
		}
		validate_NULL_TYPETYPE(  arg0, "xmlReadMemory - arg0 (buffer)");
		validate_NULL_TYPETYPE(  arg1, "xmlReadMemory - arg1 (size)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "xmlReadMemory - arg2 (URL)");
		}
		validate_NULL_TYPETYPE(  arg2, "xmlReadMemory - arg2 (URL)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "xmlReadMemory - arg3 (encoding)");
		}
		validate_NULL_TYPETYPE(  arg3, "xmlReadMemory - arg3 (encoding)");
		validate_NULL_TYPETYPE(  arg4, "xmlReadMemory - arg4 (options)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

