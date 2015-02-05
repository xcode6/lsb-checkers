// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libpng12/png.h>
#undef png_get_text
static png_uint_32(*funcptr) (png_structp , png_infop , png_textp * , int * ) = 0;

extern int __lsb_check_params;
png_uint_32 png_get_text (png_structp arg0 , png_infop arg1 , png_textp * arg2 , int * arg3 )
{
	int reset_flag = __lsb_check_params;
	png_uint_32 ret_value  ;
	__lsb_output(4, "Invoking wrapper for png_get_text()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "png_get_text", "PNG12_0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_get_text. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_get_text() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_get_text - arg0 (png_ptr)");
		validate_NULL_TYPETYPE(  arg1, "png_get_text - arg1 (info_ptr)");
		if( arg2 ) {
		validate_RWaddress( arg2, "png_get_text - arg2 (text_ptr)");
		}
		validate_NULL_TYPETYPE(  arg2, "png_get_text - arg2 (text_ptr)");
		if( arg3 ) {
		validate_RWaddress( arg3, "png_get_text - arg3 (num_text)");
		}
		validate_NULL_TYPETYPE(  arg3, "png_get_text - arg3 (num_text)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}
