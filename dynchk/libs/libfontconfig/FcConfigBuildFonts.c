// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcConfigBuildFonts
static FcBool(*funcptr) (FcConfig * ) = 0;

extern int __lsb_check_params;
FcBool FcConfigBuildFonts (FcConfig * arg0 )
{
	int reset_flag = __lsb_check_params;
	FcBool ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcConfigBuildFonts()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcConfigBuildFonts");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcConfigBuildFonts. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcConfigBuildFonts() - validating");
		validate_RWaddress( arg0, "FcConfigBuildFonts - arg0 (config)");
		validate_NULL_TYPETYPE(  arg0, "FcConfigBuildFonts - arg0 (config)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
