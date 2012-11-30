// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libpng12/png.h>
#undef png_get_IHDR
static png_uint_32(*funcptr) (png_structp , png_infop , png_uint_32 * , png_uint_32 * , int * , int * , int * , int * , int * ) = 0;

extern int __lsb_check_params;
png_uint_32 png_get_IHDR (png_structp arg0 , png_infop arg1 , png_uint_32 * arg2 , png_uint_32 * arg3 , int * arg4 , int * arg5 , int * arg6 , int * arg7 , int * arg8 )
{
	int reset_flag = __lsb_check_params;
	png_uint_32 ret_value  ;
	__lsb_output(4, "Invoking wrapper for png_get_IHDR()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "png_get_IHDR", "PNG12_0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_get_IHDR. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_get_IHDR() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_get_IHDR - arg0 (png_ptr)");
		validate_NULL_TYPETYPE(  arg1, "png_get_IHDR - arg1 (info_ptr)");
		if( arg2 ) {
		validate_RWaddress( arg2, "png_get_IHDR - arg2 (width)");
		}
		validate_NULL_TYPETYPE(  arg2, "png_get_IHDR - arg2 (width)");
		if( arg3 ) {
		validate_RWaddress( arg3, "png_get_IHDR - arg3 (height)");
		}
		validate_NULL_TYPETYPE(  arg3, "png_get_IHDR - arg3 (height)");
		if( arg4 ) {
		validate_RWaddress( arg4, "png_get_IHDR - arg4 (bit_depth)");
		}
		validate_NULL_TYPETYPE(  arg4, "png_get_IHDR - arg4 (bit_depth)");
		if( arg5 ) {
		validate_RWaddress( arg5, "png_get_IHDR - arg5 (color_type)");
		}
		validate_NULL_TYPETYPE(  arg5, "png_get_IHDR - arg5 (color_type)");
		if( arg6 ) {
		validate_RWaddress( arg6, "png_get_IHDR - arg6 (interlace_method)");
		}
		validate_NULL_TYPETYPE(  arg6, "png_get_IHDR - arg6 (interlace_method)");
		if( arg7 ) {
		validate_RWaddress( arg7, "png_get_IHDR - arg7 (compression_method)");
		}
		validate_NULL_TYPETYPE(  arg7, "png_get_IHDR - arg7 (compression_method)");
		if( arg8 ) {
		validate_RWaddress( arg8, "png_get_IHDR - arg8 (filter_method)");
		}
		validate_NULL_TYPETYPE(  arg8, "png_get_IHDR - arg8 (filter_method)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
	__lsb_check_params = reset_flag;
	return ret_value;
}

