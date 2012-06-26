// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/Xft/Xft.h>
#undef XftFontUnloadGlyphs
static void(*funcptr) (Display * , XftFont * , const FT_UInt * , int ) = 0;

extern int __lsb_check_params;
void XftFontUnloadGlyphs (Display * arg0 , XftFont * arg1 , const FT_UInt * arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XftFontUnloadGlyphs()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XftFontUnloadGlyphs");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XftFontUnloadGlyphs. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XftFontUnloadGlyphs() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XftFontUnloadGlyphs - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XftFontUnloadGlyphs - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "XftFontUnloadGlyphs - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "XftFontUnloadGlyphs - arg1");
		if( arg2 ) {
		validate_Rdaddress( arg2, "XftFontUnloadGlyphs - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "XftFontUnloadGlyphs - arg2");
		validate_NULL_TYPETYPE(  arg3, "XftFontUnloadGlyphs - arg3");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

