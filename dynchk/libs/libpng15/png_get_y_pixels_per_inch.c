// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libpng15/png.h>
#undef png_get_y_pixels_per_inch
static png_uint_32(*funcptr) (png_const_structp , png_const_infop ) = 0;

extern int __lsb_check_params;
png_uint_32 png_get_y_pixels_per_inch (png_const_structp arg0 , png_const_infop arg1 )
{
	int reset_flag = __lsb_check_params;
	png_uint_32 ret_value  ;
	__lsb_output(4, "Invoking wrapper for png_get_y_pixels_per_inch()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "png_get_y_pixels_per_inch");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_get_y_pixels_per_inch. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_get_y_pixels_per_inch() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_get_y_pixels_per_inch - arg0 (png_ptr)");
		validate_NULL_TYPETYPE(  arg1, "png_get_y_pixels_per_inch - arg1 (info_ptr)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

