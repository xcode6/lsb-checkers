// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libpng12/png.h>
#undef png_set_compression_strategy
static void(*funcptr) (png_structp , int ) = 0;

extern int __lsb_check_params;
void png_set_compression_strategy (png_structp arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for png_set_compression_strategy()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "png_set_compression_strategy", "PNG12_0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_set_compression_strategy. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_set_compression_strategy() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_set_compression_strategy - arg0 (png_ptr)");
		validate_NULL_TYPETYPE(  arg1, "png_set_compression_strategy - arg1 (strategy)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}
