// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cups/cups.h>
#include <cups/http.h>
#undef httpGetCookie
static const char *(*funcptr) (http_t * ) = 0;

extern int __lsb_check_params;
const char * httpGetCookie (http_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	const char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for httpGetCookie()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "httpGetCookie");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load httpGetCookie. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "httpGetCookie() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "httpGetCookie - arg0 (http)");
		}
		validate_NULL_TYPETYPE(  arg0, "httpGetCookie - arg0 (http)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

