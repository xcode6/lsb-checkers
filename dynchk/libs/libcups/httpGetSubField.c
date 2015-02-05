// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cups/cups.h>
#include <cups/http.h>
#undef httpGetSubField
static char *(*funcptr) (http_t * , http_field_t , const char * , char * ) = 0;

extern int __lsb_check_params;
char * httpGetSubField (http_t * arg0 , http_field_t arg1 , const char * arg2 , char * arg3 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for httpGetSubField()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "httpGetSubField");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load httpGetSubField. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "httpGetSubField() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "httpGetSubField - arg0 (http)");
		}
		validate_NULL_TYPETYPE(  arg0, "httpGetSubField - arg0 (http)");
		validate_NULL_TYPETYPE(  arg1, "httpGetSubField - arg1 (field)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "httpGetSubField - arg2 (name)");
		}
		validate_NULL_TYPETYPE(  arg2, "httpGetSubField - arg2 (name)");
		if( arg3 ) {
		validate_RWaddress( arg3, "httpGetSubField - arg3 (value)");
		}
		validate_NULL_TYPETYPE(  arg3, "httpGetSubField - arg3 (value)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}
