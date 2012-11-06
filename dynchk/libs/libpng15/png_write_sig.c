// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libpng15/png.h>
#undef png_write_sig
static void(*funcptr) (png_rw_ptr ) = 0;

extern int __lsb_check_params;
void png_write_sig (png_rw_ptr arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for png_write_sig()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "png_write_sig");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_write_sig. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_write_sig() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_write_sig - arg0 (png_ptr)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

