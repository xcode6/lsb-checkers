// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libpng15/png.h>
#include <libpng15/pngconf.h>
#undef png_set_rgb_to_gray_fixed
static void(*funcptr) (png_structp , int , png_fixed_point , png_fixed_point ) = 0;

extern int __lsb_check_params;
void png_set_rgb_to_gray_fixed (png_structp arg0 , int arg1 , png_fixed_point arg2 , png_fixed_point arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for png_set_rgb_to_gray_fixed()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "png_set_rgb_to_gray_fixed", "PNG15_0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_set_rgb_to_gray_fixed. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_set_rgb_to_gray_fixed() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_set_rgb_to_gray_fixed - arg0 (png_ptr)");
		validate_NULL_TYPETYPE(  arg1, "png_set_rgb_to_gray_fixed - arg1 (error_action)");
		validate_NULL_TYPETYPE(  arg2, "png_set_rgb_to_gray_fixed - arg2 (red)");
		validate_NULL_TYPETYPE(  arg3, "png_set_rgb_to_gray_fixed - arg3 (green)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

