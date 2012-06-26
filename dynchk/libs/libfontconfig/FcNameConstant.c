// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcNameConstant
static FcBool(*funcptr) (FcChar8 * , int * ) = 0;

extern int __lsb_check_params;
FcBool FcNameConstant (FcChar8 * arg0 , int * arg1 )
{
	int reset_flag = __lsb_check_params;
	FcBool ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcNameConstant()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcNameConstant");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcNameConstant. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcNameConstant() - validating");
		validate_RWaddress( arg0, "FcNameConstant - arg0 (string)");
		validate_NULL_TYPETYPE(  arg0, "FcNameConstant - arg0 (string)");
		validate_RWaddress( arg1, "FcNameConstant - arg1 (result)");
		validate_NULL_TYPETYPE(  arg1, "FcNameConstant - arg1 (result)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

