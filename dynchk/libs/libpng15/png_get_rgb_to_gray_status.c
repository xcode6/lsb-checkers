// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libpng15/png.h>
#undef png_get_rgb_to_gray_status
static png_byte(*funcptr) (png_const_structp ) = 0;

extern int __lsb_check_params;
png_byte png_get_rgb_to_gray_status (png_const_structp arg0 )
{
	int reset_flag = __lsb_check_params;
	png_byte ret_value  ;
	__lsb_output(4, "Invoking wrapper for png_get_rgb_to_gray_status()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "png_get_rgb_to_gray_status");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_get_rgb_to_gray_status. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_get_rgb_to_gray_status() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_get_rgb_to_gray_status - arg0 (png_ptr)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
