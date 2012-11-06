// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libpng15/png.h>
#include <libpng15/pngconf.h>
#undef png_calloc
static png_voidp(*funcptr) (png_rw_ptr , png_alloc_size_t ) = 0;

extern int __lsb_check_params;
png_voidp png_calloc (png_rw_ptr arg0 , png_alloc_size_t arg1 )
{
	int reset_flag = __lsb_check_params;
	png_voidp ret_value  ;
	__lsb_output(4, "Invoking wrapper for png_calloc()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "png_calloc");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_calloc. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_calloc() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_calloc - arg0 (png_ptr)");
		validate_NULL_TYPETYPE(  arg1, "png_calloc - arg1 (size)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

