// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libpng15/png.h>
#include <libpng15/pngconf.h>
#undef png_get_pHYs_dpi
static png_uint_32(*funcptr) (png_const_structp , png_const_infop , png_int_32 * , png_int_32 * , int * ) = 0;

extern int __lsb_check_params;
png_uint_32 png_get_pHYs_dpi (png_const_structp arg0 , png_const_infop arg1 , png_int_32 * arg2 , png_int_32 * arg3 , int * arg4 )
{
	int reset_flag = __lsb_check_params;
	png_uint_32 ret_value  ;
	__lsb_output(4, "Invoking wrapper for png_get_pHYs_dpi()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "png_get_pHYs_dpi");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_get_pHYs_dpi. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_get_pHYs_dpi() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_get_pHYs_dpi - arg0 (png_ptr)");
		validate_NULL_TYPETYPE(  arg1, "png_get_pHYs_dpi - arg1 (info_ptr)");
		if( arg2 ) {
		validate_RWaddress( arg2, "png_get_pHYs_dpi - arg2 (res_x)");
		}
		validate_NULL_TYPETYPE(  arg2, "png_get_pHYs_dpi - arg2 (res_x)");
		if( arg3 ) {
		validate_RWaddress( arg3, "png_get_pHYs_dpi - arg3 (res_y)");
		}
		validate_NULL_TYPETYPE(  arg3, "png_get_pHYs_dpi - arg3 (res_y)");
		if( arg4 ) {
		validate_RWaddress( arg4, "png_get_pHYs_dpi - arg4 (unit_type)");
		}
		validate_NULL_TYPETYPE(  arg4, "png_get_pHYs_dpi - arg4 (unit_type)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

