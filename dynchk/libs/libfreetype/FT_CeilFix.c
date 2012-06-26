// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <freetype/fttypes.h>
#include <freetype/freetype.h>
#undef FT_CeilFix
static FT_Fixed(*funcptr) (FT_Fixed ) = 0;

extern int __lsb_check_params;
FT_Fixed FT_CeilFix (FT_Fixed arg0 )
{
	int reset_flag = __lsb_check_params;
	FT_Fixed ret_value  ;
	__lsb_output(4, "Invoking wrapper for FT_CeilFix()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FT_CeilFix");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FT_CeilFix. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FT_CeilFix() - validating");
		validate_NULL_TYPETYPE(  arg0, "FT_CeilFix - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

