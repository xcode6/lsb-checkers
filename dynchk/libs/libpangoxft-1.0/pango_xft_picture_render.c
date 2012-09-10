// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/extensions/render.h>
#include <pango-1.0/pango/pango.h>
#include <glib-2.0/glib.h>
#include <pango-1.0/pango/pangoxft.h>
#undef pango_xft_picture_render
static void(*funcptr) (Display * , Picture , Picture , PangoFont * , PangoGlyphString * , gint , gint ) = 0;

extern int __lsb_check_params;
void pango_xft_picture_render (Display * arg0 , Picture arg1 , Picture arg2 , PangoFont * arg3 , PangoGlyphString * arg4 , gint arg5 , gint arg6 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for pango_xft_picture_render()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_xft_picture_render");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_xft_picture_render. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_xft_picture_render() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_xft_picture_render - arg0 (display)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_xft_picture_render - arg0 (display)");
		validate_NULL_TYPETYPE(  arg1, "pango_xft_picture_render - arg1 (src_picture)");
		validate_NULL_TYPETYPE(  arg2, "pango_xft_picture_render - arg2 (dest_picture)");
		if( arg3 ) {
		validate_RWaddress( arg3, "pango_xft_picture_render - arg3 (font)");
		}
		validate_NULL_TYPETYPE(  arg3, "pango_xft_picture_render - arg3 (font)");
		if( arg4 ) {
		validate_RWaddress( arg4, "pango_xft_picture_render - arg4 (glyphs)");
		}
		validate_NULL_TYPETYPE(  arg4, "pango_xft_picture_render - arg4 (glyphs)");
		validate_NULL_TYPETYPE(  arg5, "pango_xft_picture_render - arg5 (x)");
		validate_NULL_TYPETYPE(  arg6, "pango_xft_picture_render - arg6 (y)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
}

