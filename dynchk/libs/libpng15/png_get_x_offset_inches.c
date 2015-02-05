// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libpng15/png.h>
#undef png_get_x_offset_inches
static float(*funcptr) (png_const_structp , png_const_infop ) = 0;

extern int __lsb_check_params;
float png_get_x_offset_inches (png_const_structp arg0 , png_const_infop arg1 )
{
	int reset_flag = __lsb_check_params;
	float ret_value  ;
	__lsb_output(4, "Invoking wrapper for png_get_x_offset_inches()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "png_get_x_offset_inches", "PNG15_0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_get_x_offset_inches. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_get_x_offset_inches() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_get_x_offset_inches - arg0 (png_ptr)");
		validate_NULL_TYPETYPE(  arg1, "png_get_x_offset_inches - arg1 (info_ptr)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

