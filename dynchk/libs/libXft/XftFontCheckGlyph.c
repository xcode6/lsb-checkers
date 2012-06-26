// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/Xft/Xft.h>
#include <fontconfig/fontconfig.h>
#include <freetype/fttypes.h>
#include <freetype/freetype.h>
#undef XftFontCheckGlyph
static FcBool(*funcptr) (Display * , XftFont * , FcBool , FT_UInt , FT_UInt * , int * ) = 0;

extern int __lsb_check_params;
FcBool XftFontCheckGlyph (Display * arg0 , XftFont * arg1 , FcBool arg2 , FT_UInt arg3 , FT_UInt * arg4 , int * arg5 )
{
	int reset_flag = __lsb_check_params;
	FcBool ret_value  ;
	__lsb_output(4, "Invoking wrapper for XftFontCheckGlyph()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XftFontCheckGlyph");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XftFontCheckGlyph. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XftFontCheckGlyph() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XftFontCheckGlyph - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XftFontCheckGlyph - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "XftFontCheckGlyph - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "XftFontCheckGlyph - arg1");
		validate_NULL_TYPETYPE(  arg2, "XftFontCheckGlyph - arg2");
		validate_NULL_TYPETYPE(  arg3, "XftFontCheckGlyph - arg3");
		if( arg4 ) {
		validate_RWaddress( arg4, "XftFontCheckGlyph - arg4");
		}
		validate_NULL_TYPETYPE(  arg4, "XftFontCheckGlyph - arg4");
		if( arg5 ) {
		validate_RWaddress( arg5, "XftFontCheckGlyph - arg5");
		}
		validate_NULL_TYPETYPE(  arg5, "XftFontCheckGlyph - arg5");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

