// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <freetype/freetype.h>
#include <freetype/fttypes.h>
#undef FT_Set_Char_Size
static FT_Error(*funcptr) (FT_Face , FT_F26Dot6 , FT_F26Dot6 , FT_UInt , FT_UInt ) = 0;

extern int __lsb_check_params;
FT_Error FT_Set_Char_Size (FT_Face arg0 , FT_F26Dot6 arg1 , FT_F26Dot6 arg2 , FT_UInt arg3 , FT_UInt arg4 )
{
	int reset_flag = __lsb_check_params;
	FT_Error ret_value  ;
	__lsb_output(4, "Invoking wrapper for FT_Set_Char_Size()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FT_Set_Char_Size");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FT_Set_Char_Size. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FT_Set_Char_Size() - validating");
		validate_NULL_TYPETYPE(  arg0, "FT_Set_Char_Size - arg0");
		validate_NULL_TYPETYPE(  arg1, "FT_Set_Char_Size - arg1");
		validate_NULL_TYPETYPE(  arg2, "FT_Set_Char_Size - arg2");
		validate_NULL_TYPETYPE(  arg3, "FT_Set_Char_Size - arg3");
		validate_NULL_TYPETYPE(  arg4, "FT_Set_Char_Size - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}
