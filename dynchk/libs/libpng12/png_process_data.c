// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <png.h>
#undef png_process_data
static void(*funcptr) (png_structp , png_infop , png_bytep , png_size_t ) = 0;

extern int __lsb_check_params;
void png_process_data (png_structp arg0 , png_infop arg1 , png_bytep arg2 , png_size_t arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for png_process_data()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "png_process_data", "PNG12_0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_process_data. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_process_data() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_process_data - arg0 (png_ptr)");
		validate_NULL_TYPETYPE(  arg1, "png_process_data - arg1 (info_ptr)");
		validate_NULL_TYPETYPE(  arg2, "png_process_data - arg2 (buffer)");
		validate_NULL_TYPETYPE(  arg3, "png_process_data - arg3 (buffer_size)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

