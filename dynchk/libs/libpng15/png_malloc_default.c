// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libpng15/png.h>
#include <libpng15/pngconf.h>
#undef png_malloc_default
static png_voidp(*funcptr) (png_structp , png_alloc_size_t ) = 0;

extern int __lsb_check_params;
png_voidp png_malloc_default (png_structp arg0 , png_alloc_size_t arg1 )
{
	int reset_flag = __lsb_check_params;
	png_voidp ret_value  ;
	__lsb_output(4, "Invoking wrapper for png_malloc_default()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "png_malloc_default", "PNG15_0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_malloc_default. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_malloc_default() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_malloc_default - arg0 (png_ptr)");
		validate_NULL_TYPETYPE(  arg1, "png_malloc_default - arg1 (size)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

