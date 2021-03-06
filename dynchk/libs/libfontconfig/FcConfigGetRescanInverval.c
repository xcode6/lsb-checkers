// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcConfigGetRescanInverval
static int(*funcptr) (FcConfig * ) = 0;

extern int __lsb_check_params;
int FcConfigGetRescanInverval (FcConfig * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcConfigGetRescanInverval()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcConfigGetRescanInverval");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcConfigGetRescanInverval. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcConfigGetRescanInverval() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "FcConfigGetRescanInverval - arg0 (config)");
		}
		validate_NULL_TYPETYPE(  arg0, "FcConfigGetRescanInverval - arg0 (config)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

