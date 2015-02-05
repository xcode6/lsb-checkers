// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cups/cups.h>
#undef cupsGetFd
static http_status_t(*funcptr) (http_t * , const char * , int ) = 0;

extern int __lsb_check_params;
http_status_t cupsGetFd (http_t * arg0 , const char * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	http_status_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for cupsGetFd()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cupsGetFd");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cupsGetFd. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cupsGetFd() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cupsGetFd - arg0 (http)");
		}
		validate_NULL_TYPETYPE(  arg0, "cupsGetFd - arg0 (http)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "cupsGetFd - arg1 (resource)");
		}
		validate_NULL_TYPETYPE(  arg1, "cupsGetFd - arg1 (resource)");
		validate_NULL_TYPETYPE(  arg2, "cupsGetFd - arg2 (fd)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
