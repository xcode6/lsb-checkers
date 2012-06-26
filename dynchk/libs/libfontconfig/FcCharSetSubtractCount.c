// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcCharSetSubtractCount
static FcChar32(*funcptr) (const FcCharSet * , const FcCharSet * ) = 0;

extern int __lsb_check_params;
FcChar32 FcCharSetSubtractCount (const FcCharSet * arg0 , const FcCharSet * arg1 )
{
	int reset_flag = __lsb_check_params;
	FcChar32 ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcCharSetSubtractCount()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcCharSetSubtractCount");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcCharSetSubtractCount. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcCharSetSubtractCount() - validating");
		validate_Rdaddress( arg0, "FcCharSetSubtractCount - arg0 (a)");
		validate_NULL_TYPETYPE(  arg0, "FcCharSetSubtractCount - arg0 (a)");
		validate_Rdaddress( arg1, "FcCharSetSubtractCount - arg1 (b)");
		validate_NULL_TYPETYPE(  arg1, "FcCharSetSubtractCount - arg1 (b)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

