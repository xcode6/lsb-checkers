// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cups/cups.h>
#undef cupsGetPPD2
static const char *(*funcptr) (http_t * , const char * ) = 0;

extern int __lsb_check_params;
const char * cupsGetPPD2 (http_t * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	const char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for cupsGetPPD2()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cupsGetPPD2");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cupsGetPPD2. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cupsGetPPD2() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cupsGetPPD2 - arg0 (http)");
		}
		validate_NULL_TYPETYPE(  arg0, "cupsGetPPD2 - arg0 (http)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "cupsGetPPD2 - arg1 (printer)");
		}
		validate_NULL_TYPETYPE(  arg1, "cupsGetPPD2 - arg1 (printer)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
