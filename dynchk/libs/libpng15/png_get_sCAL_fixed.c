// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libpng15/png.h>
#undef png_get_sCAL_fixed
static png_uint_32(*funcptr) (png_structp , png_const_infop , int * , double * , double * ) = 0;

extern int __lsb_check_params;
png_uint_32 png_get_sCAL_fixed (png_structp arg0 , png_const_infop arg1 , int * arg2 , double * arg3 , double * arg4 )
{
	int reset_flag = __lsb_check_params;
	png_uint_32 ret_value  ;
	__lsb_output(4, "Invoking wrapper for png_get_sCAL_fixed()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "png_get_sCAL_fixed");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_get_sCAL_fixed. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_get_sCAL_fixed() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_get_sCAL_fixed - arg0 (png_ptr)");
		validate_NULL_TYPETYPE(  arg1, "png_get_sCAL_fixed - arg1 (info_ptr)");
		if( arg2 ) {
		validate_RWaddress( arg2, "png_get_sCAL_fixed - arg2 (unit)");
		}
		validate_NULL_TYPETYPE(  arg2, "png_get_sCAL_fixed - arg2 (unit)");
		if( arg3 ) {
		validate_RWaddress( arg3, "png_get_sCAL_fixed - arg3 (width)");
		}
		validate_NULL_TYPETYPE(  arg3, "png_get_sCAL_fixed - arg3 (width)");
		if( arg4 ) {
		validate_RWaddress( arg4, "png_get_sCAL_fixed - arg4 (height)");
		}
		validate_NULL_TYPETYPE(  arg4, "png_get_sCAL_fixed - arg4 (height)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}
