// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <pango-1.0/pango/pango.h>
#include <glib-2.0/glib.h>
#undef gdk_draw_glyphs
static void(*funcptr) (GdkDrawable * , GdkGC * , PangoFont * , gint , gint , PangoGlyphString * ) = 0;

extern int __lsb_check_params;
void gdk_draw_glyphs (GdkDrawable * arg0 , GdkGC * arg1 , PangoFont * arg2 , gint arg3 , gint arg4 , PangoGlyphString * arg5 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_draw_glyphs()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_draw_glyphs");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_draw_glyphs. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_draw_glyphs() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_draw_glyphs - arg0 (drawable)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_draw_glyphs - arg0 (drawable)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_draw_glyphs - arg1 (gc)");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_draw_glyphs - arg1 (gc)");
		if( arg2 ) {
		validate_RWaddress( arg2, "gdk_draw_glyphs - arg2 (font)");
		}
		validate_NULL_TYPETYPE(  arg2, "gdk_draw_glyphs - arg2 (font)");
		validate_NULL_TYPETYPE(  arg3, "gdk_draw_glyphs - arg3 (x)");
		validate_NULL_TYPETYPE(  arg4, "gdk_draw_glyphs - arg4 (y)");
		if( arg5 ) {
		validate_RWaddress( arg5, "gdk_draw_glyphs - arg5 (glyphs)");
		}
		validate_NULL_TYPETYPE(  arg5, "gdk_draw_glyphs - arg5 (glyphs)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}

