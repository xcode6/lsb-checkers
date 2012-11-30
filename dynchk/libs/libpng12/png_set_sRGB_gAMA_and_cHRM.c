// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libpng12/png.h>
#undef png_set_sRGB_gAMA_and_cHRM
static void(*funcptr) (png_structp , png_infop , int ) = 0;

extern int __lsb_check_params;
void png_set_sRGB_gAMA_and_cHRM (png_structp arg0 , png_infop arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for png_set_sRGB_gAMA_and_cHRM()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "png_set_sRGB_gAMA_and_cHRM", "PNG12_0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_set_sRGB_gAMA_and_cHRM. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_set_sRGB_gAMA_and_cHRM() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_set_sRGB_gAMA_and_cHRM - arg0 (png_ptr)");
		validate_NULL_TYPETYPE(  arg1, "png_set_sRGB_gAMA_and_cHRM - arg1 (info_ptr)");
		validate_NULL_TYPETYPE(  arg2, "png_set_sRGB_gAMA_and_cHRM - arg2 (intent)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

