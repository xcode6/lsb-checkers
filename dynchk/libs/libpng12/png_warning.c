// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <png.h>
#undef png_warning
static void(*funcptr) (png_structp , png_const_charp ) = 0;

extern int __lsb_check_params;
void png_warning (png_structp arg0 , png_const_charp arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for png_warning()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "png_warning", "PNG12_0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_warning. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_warning() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_warning - arg0 (png_ptr)");
		validate_NULL_TYPETYPE(  arg1, "png_warning - arg1 (warning_message)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

