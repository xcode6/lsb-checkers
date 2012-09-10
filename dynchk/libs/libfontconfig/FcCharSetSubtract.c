// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcCharSetSubtract
static FcCharSet *(*funcptr) (const FcCharSet * , const FcCharSet * ) = 0;

extern int __lsb_check_params;
FcCharSet * FcCharSetSubtract (const FcCharSet * arg0 , const FcCharSet * arg1 )
{
	int reset_flag = __lsb_check_params;
	FcCharSet * ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcCharSetSubtract()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcCharSetSubtract");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcCharSetSubtract. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcCharSetSubtract() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "FcCharSetSubtract - arg0 (a)");
		}
		validate_NULL_TYPETYPE(  arg0, "FcCharSetSubtract - arg0 (a)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "FcCharSetSubtract - arg1 (b)");
		}
		validate_NULL_TYPETYPE(  arg1, "FcCharSetSubtract - arg1 (b)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

