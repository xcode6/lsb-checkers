// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libpng15/png.h>
#undef png_get_pixel_aspect_ratio_fixed
static png_fixed_point(*funcptr) (png_const_structp , png_const_infop ) = 0;

extern int __lsb_check_params;
png_fixed_point png_get_pixel_aspect_ratio_fixed (png_const_structp arg0 , png_const_infop arg1 )
{
	int reset_flag = __lsb_check_params;
	png_fixed_point ret_value  ;
	__lsb_output(4, "Invoking wrapper for png_get_pixel_aspect_ratio_fixed()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "png_get_pixel_aspect_ratio_fixed", "PNG15_0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_get_pixel_aspect_ratio_fixed. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_get_pixel_aspect_ratio_fixed() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_get_pixel_aspect_ratio_fixed - arg0 (png_ptr)");
		validate_NULL_TYPETYPE(  arg1, "png_get_pixel_aspect_ratio_fixed - arg1 (info_ptr)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

