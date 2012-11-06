// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libpng15/png.h>
#include <stddef.h>
#undef png_set_longjmp_fn
static struct __jmp_buf_tag *(*funcptr) [1](png_rw_ptr , png_longjmp_ptr , size_t ) = 0;

extern int __lsb_check_params;
struct __jmp_buf_tag * png_set_longjmp_fn [1](png_rw_ptr arg0 , png_longjmp_ptr arg1 , size_t arg2 )
{
	int reset_flag = __lsb_check_params;
	struct __jmp_buf_tag * ret_value  [1];
	__lsb_output(4, "Invoking wrapper for png_set_longjmp_fn()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "png_set_longjmp_fn");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_set_longjmp_fn. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_set_longjmp_fn() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_set_longjmp_fn - arg0 (png_ptr)");
		validate_NULL_TYPETYPE(  arg1, "png_set_longjmp_fn - arg1 (longjmp_fn)");
		validate_NULL_TYPETYPE(  arg2, "png_set_longjmp_fn - arg2 (jmp_buf_size)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

