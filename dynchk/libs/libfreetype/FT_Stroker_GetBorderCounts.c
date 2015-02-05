// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <freetype/ftstroke.h>
#include <freetype/freetype.h>
#undef FT_Stroker_GetBorderCounts
static FT_Error(*funcptr) (FT_Stroker , FT_StrokerBorder , FT_UInt * , FT_UInt * ) = 0;

extern int __lsb_check_params;
FT_Error FT_Stroker_GetBorderCounts (FT_Stroker arg0 , FT_StrokerBorder arg1 , FT_UInt * arg2 , FT_UInt * arg3 )
{
	int reset_flag = __lsb_check_params;
	FT_Error ret_value  ;
	__lsb_output(4, "Invoking wrapper for FT_Stroker_GetBorderCounts()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FT_Stroker_GetBorderCounts");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FT_Stroker_GetBorderCounts. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FT_Stroker_GetBorderCounts() - validating");
		validate_NULL_TYPETYPE(  arg0, "FT_Stroker_GetBorderCounts - arg0");
		validate_NULL_TYPETYPE(  arg1, "FT_Stroker_GetBorderCounts - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "FT_Stroker_GetBorderCounts - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "FT_Stroker_GetBorderCounts - arg2");
		if( arg3 ) {
		validate_RWaddress( arg3, "FT_Stroker_GetBorderCounts - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "FT_Stroker_GetBorderCounts - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}
