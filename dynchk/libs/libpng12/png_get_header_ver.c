// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <png.h>
#undef png_get_header_ver
static png_charp(*funcptr) (png_structp ) = 0;

extern int __lsb_check_params;
png_charp png_get_header_ver (png_structp arg0 )
{
	int reset_flag = __lsb_check_params;
	png_charp ret_value  ;
	__lsb_output(4, "Invoking wrapper for png_get_header_ver()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "png_get_header_ver", "PNG12_0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_get_header_ver. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_get_header_ver() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_get_header_ver - arg0 (png_ptr)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

