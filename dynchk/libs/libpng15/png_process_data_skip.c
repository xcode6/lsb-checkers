// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libpng15/png.h>
#undef png_process_data_skip
static png_uint_32(*funcptr) (png_rw_ptr ) = 0;

extern int __lsb_check_params;
png_uint_32 png_process_data_skip (png_rw_ptr arg0 )
{
	int reset_flag = __lsb_check_params;
	png_uint_32 ret_value  ;
	__lsb_output(4, "Invoking wrapper for png_process_data_skip()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "png_process_data_skip");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_process_data_skip. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_process_data_skip() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_process_data_skip - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

