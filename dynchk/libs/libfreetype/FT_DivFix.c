// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <freetype/fttypes.h>
#include <freetype/freetype.h>
#undef FT_DivFix
static FT_Long(*funcptr) (FT_Long , FT_Long ) = 0;

extern int __lsb_check_params;
FT_Long FT_DivFix (FT_Long arg0 , FT_Long arg1 )
{
	int reset_flag = __lsb_check_params;
	FT_Long ret_value  ;
	__lsb_output(4, "Invoking wrapper for FT_DivFix()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FT_DivFix");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FT_DivFix. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FT_DivFix() - validating");
		validate_NULL_TYPETYPE(  arg0, "FT_DivFix - arg0");
		validate_NULL_TYPETYPE(  arg1, "FT_DivFix - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
