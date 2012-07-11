// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <png.h>
#undef png_set_write_fn
static void(*funcptr) (png_structp , png_voidp , png_rw_ptr , png_flush_ptr ) = 0;

extern int __lsb_check_params;
void png_set_write_fn (png_structp arg0 , png_voidp arg1 , png_rw_ptr arg2 , png_flush_ptr arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for png_set_write_fn()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "png_set_write_fn", "PNG12_0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_set_write_fn. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_set_write_fn() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_set_write_fn - arg0 (png_ptr)");
		validate_NULL_TYPETYPE(  arg1, "png_set_write_fn - arg1 (io_ptr)");
		validate_NULL_TYPETYPE(  arg2, "png_set_write_fn - arg2 (write_data_fn)");
		validate_NULL_TYPETYPE(  arg3, "png_set_write_fn - arg3 (output_flush_fn)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}
