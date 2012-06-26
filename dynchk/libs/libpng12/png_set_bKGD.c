// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <png.h>
#undef png_set_bKGD
static void(*funcptr) (png_structp , png_infop , png_color_16p ) = 0;

extern int __lsb_check_params;
void png_set_bKGD (png_structp arg0 , png_infop arg1 , png_color_16p arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for png_set_bKGD()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "png_set_bKGD", "PNG12_0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_set_bKGD. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_set_bKGD() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_set_bKGD - arg0 (png_ptr)");
		validate_NULL_TYPETYPE(  arg1, "png_set_bKGD - arg1 (info_ptr)");
		validate_NULL_TYPETYPE(  arg2, "png_set_bKGD - arg2 (background)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

