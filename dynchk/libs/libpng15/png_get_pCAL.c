// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libpng15/png.h>
#include <libpng15/pngconf.h>
#undef png_get_pCAL
static png_uint_32(*funcptr) (png_structp , png_infop , png_charp * , png_int_32 * , png_int_32 * , int * , int * , png_charp * , png_charpp * ) = 0;

extern int __lsb_check_params;
png_uint_32 png_get_pCAL (png_structp arg0 , png_infop arg1 , png_charp * arg2 , png_int_32 * arg3 , png_int_32 * arg4 , int * arg5 , int * arg6 , png_charp * arg7 , png_charpp * arg8 )
{
	int reset_flag = __lsb_check_params;
	png_uint_32 ret_value  ;
	__lsb_output(4, "Invoking wrapper for png_get_pCAL()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "png_get_pCAL", "PNG15_0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_get_pCAL. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_get_pCAL() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_get_pCAL - arg0 (png_ptr)");
		validate_NULL_TYPETYPE(  arg1, "png_get_pCAL - arg1 (info_ptr)");
		if( arg2 ) {
		validate_RWaddress( arg2, "png_get_pCAL - arg2 (purpose)");
		}
		validate_NULL_TYPETYPE(  arg2, "png_get_pCAL - arg2 (purpose)");
		if( arg3 ) {
		validate_RWaddress( arg3, "png_get_pCAL - arg3 (X0)");
		}
		validate_NULL_TYPETYPE(  arg3, "png_get_pCAL - arg3 (X0)");
		if( arg4 ) {
		validate_RWaddress( arg4, "png_get_pCAL - arg4 (X1)");
		}
		validate_NULL_TYPETYPE(  arg4, "png_get_pCAL - arg4 (X1)");
		if( arg5 ) {
		validate_RWaddress( arg5, "png_get_pCAL - arg5 (type)");
		}
		validate_NULL_TYPETYPE(  arg5, "png_get_pCAL - arg5 (type)");
		if( arg6 ) {
		validate_RWaddress( arg6, "png_get_pCAL - arg6 (nparams)");
		}
		validate_NULL_TYPETYPE(  arg6, "png_get_pCAL - arg6 (nparams)");
		if( arg7 ) {
		validate_RWaddress( arg7, "png_get_pCAL - arg7 (units)");
		}
		validate_NULL_TYPETYPE(  arg7, "png_get_pCAL - arg7 (units)");
		if( arg8 ) {
		validate_RWaddress( arg8, "png_get_pCAL - arg8 (params)");
		}
		validate_NULL_TYPETYPE(  arg8, "png_get_pCAL - arg8 (params)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
	__lsb_check_params = reset_flag;
	return ret_value;
}
