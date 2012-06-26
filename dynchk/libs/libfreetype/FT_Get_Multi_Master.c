// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <freetype/freetype.h>
#include <freetype/ftmm.h>
#undef FT_Get_Multi_Master
static FT_Error(*funcptr) (FT_Face , FT_Multi_Master * ) = 0;

extern int __lsb_check_params;
FT_Error FT_Get_Multi_Master (FT_Face arg0 , FT_Multi_Master * arg1 )
{
	int reset_flag = __lsb_check_params;
	FT_Error ret_value  ;
	__lsb_output(4, "Invoking wrapper for FT_Get_Multi_Master()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FT_Get_Multi_Master");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FT_Get_Multi_Master. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FT_Get_Multi_Master() - validating");
		validate_NULL_TYPETYPE(  arg0, "FT_Get_Multi_Master - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "FT_Get_Multi_Master - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "FT_Get_Multi_Master - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

