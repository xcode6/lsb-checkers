// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libpng15/png.h>
#include <libpng15/pngconf.h>
#undef png_get_sCAL_s
static png_uint_32(*funcptr) (png_const_structp , png_const_infop , int * , png_charpp , png_charpp ) = 0;

extern int __lsb_check_params;
png_uint_32 png_get_sCAL_s (png_const_structp arg0 , png_const_infop arg1 , int * arg2 , png_charpp arg3 , png_charpp arg4 )
{
	int reset_flag = __lsb_check_params;
	png_uint_32 ret_value  ;
	__lsb_output(4, "Invoking wrapper for png_get_sCAL_s()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "png_get_sCAL_s", "PNG15_0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_get_sCAL_s. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_get_sCAL_s() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_get_sCAL_s - arg0 (png_ptr)");
		validate_NULL_TYPETYPE(  arg1, "png_get_sCAL_s - arg1 (info_ptr)");
		if( arg2 ) {
		validate_RWaddress( arg2, "png_get_sCAL_s - arg2 (unit)");
		}
		validate_NULL_TYPETYPE(  arg2, "png_get_sCAL_s - arg2 (unit)");
		validate_NULL_TYPETYPE(  arg3, "png_get_sCAL_s - arg3 (swidth)");
		validate_NULL_TYPETYPE(  arg4, "png_get_sCAL_s - arg4 (sheight)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

