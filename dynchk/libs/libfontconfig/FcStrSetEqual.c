// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcStrSetEqual
static FcBool(*funcptr) (FcStrSet * , FcStrSet * ) = 0;

extern int __lsb_check_params;
FcBool FcStrSetEqual (FcStrSet * arg0 , FcStrSet * arg1 )
{
	int reset_flag = __lsb_check_params;
	FcBool ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcStrSetEqual()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcStrSetEqual");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcStrSetEqual. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcStrSetEqual() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "FcStrSetEqual - arg0 (sa)");
		}
		validate_NULL_TYPETYPE(  arg0, "FcStrSetEqual - arg0 (sa)");
		if( arg1 ) {
		validate_RWaddress( arg1, "FcStrSetEqual - arg1 (sb)");
		}
		validate_NULL_TYPETYPE(  arg1, "FcStrSetEqual - arg1 (sb)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
