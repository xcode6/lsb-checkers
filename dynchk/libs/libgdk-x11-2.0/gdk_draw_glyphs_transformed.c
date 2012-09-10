// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <pango-1.0/pango/pango.h>
#include <glib-2.0/glib.h>
#undef gdk_draw_glyphs_transformed
static void(*funcptr) (GdkDrawable * , GdkGC * , const PangoMatrix * , PangoFont * , gint , gint , PangoGlyphString * ) = 0;

extern int __lsb_check_params;
void gdk_draw_glyphs_transformed (GdkDrawable * arg0 , GdkGC * arg1 , const PangoMatrix * arg2 , PangoFont * arg3 , gint arg4 , gint arg5 , PangoGlyphString * arg6 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_draw_glyphs_transformed()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_draw_glyphs_transformed");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_draw_glyphs_transformed. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_draw_glyphs_transformed() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_draw_glyphs_transformed - arg0 (drawable)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_draw_glyphs_transformed - arg0 (drawable)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_draw_glyphs_transformed - arg1 (gc)");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_draw_glyphs_transformed - arg1 (gc)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "gdk_draw_glyphs_transformed - arg2 (matrix)");
		}
		validate_NULL_TYPETYPE(  arg2, "gdk_draw_glyphs_transformed - arg2 (matrix)");
		if( arg3 ) {
		validate_RWaddress( arg3, "gdk_draw_glyphs_transformed - arg3 (font)");
		}
		validate_NULL_TYPETYPE(  arg3, "gdk_draw_glyphs_transformed - arg3 (font)");
		validate_NULL_TYPETYPE(  arg4, "gdk_draw_glyphs_transformed - arg4 (x)");
		validate_NULL_TYPETYPE(  arg5, "gdk_draw_glyphs_transformed - arg5 (y)");
		if( arg6 ) {
		validate_RWaddress( arg6, "gdk_draw_glyphs_transformed - arg6 (glyphs)");
		}
		validate_NULL_TYPETYPE(  arg6, "gdk_draw_glyphs_transformed - arg6 (glyphs)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
}

