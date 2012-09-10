// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcBlanksIsMember
static FcBool(*funcptr) (FcBlanks * , FcChar32 ) = 0;

extern int __lsb_check_params;
FcBool FcBlanksIsMember (FcBlanks * arg0 , FcChar32 arg1 )
{
	int reset_flag = __lsb_check_params;
	FcBool ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcBlanksIsMember()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcBlanksIsMember");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcBlanksIsMember. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcBlanksIsMember() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "FcBlanksIsMember - arg0 (b)");
		}
		validate_NULL_TYPETYPE(  arg0, "FcBlanksIsMember - arg0 (b)");
		validate_NULL_TYPETYPE(  arg1, "FcBlanksIsMember - arg1 (ucs4)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

