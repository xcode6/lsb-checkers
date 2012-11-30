// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libpng12/png.h>
#undef png_create_info_struct
static png_infop(*funcptr) (png_structp ) = 0;

extern int __lsb_check_params;
png_infop png_create_info_struct (png_structp arg0 )
{
	int reset_flag = __lsb_check_params;
	png_infop ret_value  ;
	__lsb_output(4, "Invoking wrapper for png_create_info_struct()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "png_create_info_struct", "PNG12_0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_create_info_struct. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_create_info_struct() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_create_info_struct - arg0 (png_ptr)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

