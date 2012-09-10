// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcPatternAdd
static FcBool(*funcptr) (FcPattern * , const char * , FcValue , FcBool ) = 0;

extern int __lsb_check_params;
FcBool FcPatternAdd (FcPattern * arg0 , const char * arg1 , FcValue arg2 , FcBool arg3 )
{
	int reset_flag = __lsb_check_params;
	FcBool ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcPatternAdd()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcPatternAdd");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcPatternAdd. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcPatternAdd() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "FcPatternAdd - arg0 (p)");
		}
		validate_NULL_TYPETYPE(  arg0, "FcPatternAdd - arg0 (p)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "FcPatternAdd - arg1 (object)");
		}
		validate_NULL_TYPETYPE(  arg1, "FcPatternAdd - arg1 (object)");
		validate_NULL_TYPETYPE(  arg2, "FcPatternAdd - arg2 (value)");
		validate_NULL_TYPETYPE(  arg3, "FcPatternAdd - arg3 (append)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

