// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libpng15/png.h>
#include <libpng15/pngconf.h>
#undef png_get_cHRM_XYZ_fixed
static png_uint_32(*funcptr) (png_structp , png_const_infop , png_fixed_point * , png_fixed_point * , png_fixed_point * , png_fixed_point * , png_fixed_point * , png_fixed_point * , png_fixed_point * , png_fixed_point * ) = 0;

extern int __lsb_check_params;
png_uint_32 png_get_cHRM_XYZ_fixed (png_structp arg0 , png_const_infop arg1 , png_fixed_point * arg2 , png_fixed_point * arg3 , png_fixed_point * arg4 , png_fixed_point * arg5 , png_fixed_point * arg6 , png_fixed_point * arg7 , png_fixed_point * arg8 , png_fixed_point * arg9 )
{
	int reset_flag = __lsb_check_params;
	png_uint_32 ret_value  ;
	__lsb_output(4, "Invoking wrapper for png_get_cHRM_XYZ_fixed()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "png_get_cHRM_XYZ_fixed");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_get_cHRM_XYZ_fixed. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_get_cHRM_XYZ_fixed() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_get_cHRM_XYZ_fixed - arg0 (png_ptr)");
		validate_NULL_TYPETYPE(  arg1, "png_get_cHRM_XYZ_fixed - arg1 (info_ptr)");
		if( arg2 ) {
		validate_RWaddress( arg2, "png_get_cHRM_XYZ_fixed - arg2 (int_red_X)");
		}
		validate_NULL_TYPETYPE(  arg2, "png_get_cHRM_XYZ_fixed - arg2 (int_red_X)");
		if( arg3 ) {
		validate_RWaddress( arg3, "png_get_cHRM_XYZ_fixed - arg3 (int_red_Y)");
		}
		validate_NULL_TYPETYPE(  arg3, "png_get_cHRM_XYZ_fixed - arg3 (int_red_Y)");
		if( arg4 ) {
		validate_RWaddress( arg4, "png_get_cHRM_XYZ_fixed - arg4 (int_red_Z)");
		}
		validate_NULL_TYPETYPE(  arg4, "png_get_cHRM_XYZ_fixed - arg4 (int_red_Z)");
		if( arg5 ) {
		validate_RWaddress( arg5, "png_get_cHRM_XYZ_fixed - arg5 (int_green_X)");
		}
		validate_NULL_TYPETYPE(  arg5, "png_get_cHRM_XYZ_fixed - arg5 (int_green_X)");
		if( arg6 ) {
		validate_RWaddress( arg6, "png_get_cHRM_XYZ_fixed - arg6 (int_green_Y)");
		}
		validate_NULL_TYPETYPE(  arg6, "png_get_cHRM_XYZ_fixed - arg6 (int_green_Y)");
		if( arg7 ) {
		validate_RWaddress( arg7, "png_get_cHRM_XYZ_fixed - arg7 (int_green_Z)");
		}
		validate_NULL_TYPETYPE(  arg7, "png_get_cHRM_XYZ_fixed - arg7 (int_green_Z)");
		if( arg8 ) {
		validate_RWaddress( arg8, "png_get_cHRM_XYZ_fixed - arg8 (int_blue_X)");
		}
		validate_NULL_TYPETYPE(  arg8, "png_get_cHRM_XYZ_fixed - arg8 (int_blue_X)");
		if( arg9 ) {
		validate_RWaddress( arg9, "png_get_cHRM_XYZ_fixed - arg9 (int_blue_Y)");
		}
		validate_NULL_TYPETYPE(  arg9, "png_get_cHRM_XYZ_fixed - arg9 (int_blue_Y)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
	__lsb_check_params = reset_flag;
	return ret_value;
}

