// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pangoxft.h>
#include <X11/Xft/Xft.h>
#include <pango-1.0/pango/pango.h>
#include <glib-2.0/glib.h>
#undef pango_xft_render
static void(*funcptr) (XftDraw * , XftColor * , PangoFont * , PangoGlyphString * , gint , gint ) = 0;

extern int __lsb_check_params;
void pango_xft_render (XftDraw * arg0 , XftColor * arg1 , PangoFont * arg2 , PangoGlyphString * arg3 , gint arg4 , gint arg5 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for pango_xft_render()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_xft_render");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_xft_render. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_xft_render() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_xft_render - arg0 (draw)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_xft_render - arg0 (draw)");
		if( arg1 ) {
		validate_RWaddress( arg1, "pango_xft_render - arg1 (color)");
		}
		validate_NULL_TYPETYPE(  arg1, "pango_xft_render - arg1 (color)");
		if( arg2 ) {
		validate_RWaddress( arg2, "pango_xft_render - arg2 (font)");
		}
		validate_NULL_TYPETYPE(  arg2, "pango_xft_render - arg2 (font)");
		if( arg3 ) {
		validate_RWaddress( arg3, "pango_xft_render - arg3 (glyphs)");
		}
		validate_NULL_TYPETYPE(  arg3, "pango_xft_render - arg3 (glyphs)");
		validate_NULL_TYPETYPE(  arg4, "pango_xft_render - arg4 (x)");
		validate_NULL_TYPETYPE(  arg5, "pango_xft_render - arg5 (y)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}

