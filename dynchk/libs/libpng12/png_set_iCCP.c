// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <png.h>
#undef png_set_iCCP
static void(*funcptr) (png_structp , png_infop , png_charp , int , png_charp , png_uint_32 ) = 0;

extern int __lsb_check_params;
void png_set_iCCP (png_structp arg0 , png_infop arg1 , png_charp arg2 , int arg3 , png_charp arg4 , png_uint_32 arg5 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for png_set_iCCP()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "png_set_iCCP", "PNG12_0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_set_iCCP. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_set_iCCP() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_set_iCCP - arg0 (png_ptr)");
		validate_NULL_TYPETYPE(  arg1, "png_set_iCCP - arg1 (info_ptr)");
		validate_NULL_TYPETYPE(  arg2, "png_set_iCCP - arg2 (name)");
		validate_NULL_TYPETYPE(  arg3, "png_set_iCCP - arg3 (compression_type)");
		validate_NULL_TYPETYPE(  arg4, "png_set_iCCP - arg4 (profile)");
		validate_NULL_TYPETYPE(  arg5, "png_set_iCCP - arg5 (proflen)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}

