// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <freetype/freetype.h>
#include <freetype/ftimage.h>
#include <freetype/fttypes.h>
#include <freetype/ftbitmap.h>
#undef FT_Bitmap_Convert
static FT_Error(*funcptr) (FT_Library , const FT_Bitmap * , FT_Bitmap * , FT_Int ) = 0;

extern int __lsb_check_params;
FT_Error FT_Bitmap_Convert (FT_Library arg0 , const FT_Bitmap * arg1 , FT_Bitmap * arg2 , FT_Int arg3 )
{
	int reset_flag = __lsb_check_params;
	FT_Error ret_value  ;
	__lsb_output(4, "Invoking wrapper for FT_Bitmap_Convert()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FT_Bitmap_Convert");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FT_Bitmap_Convert. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FT_Bitmap_Convert() - validating");
		validate_NULL_TYPETYPE(  arg0, "FT_Bitmap_Convert - arg0");
		if( arg1 ) {
		validate_Rdaddress( arg1, "FT_Bitmap_Convert - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "FT_Bitmap_Convert - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "FT_Bitmap_Convert - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "FT_Bitmap_Convert - arg2");
		validate_NULL_TYPETYPE(  arg3, "FT_Bitmap_Convert - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

