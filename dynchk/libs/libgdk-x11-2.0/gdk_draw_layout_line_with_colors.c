// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#include <pango-1.0/pango/pango.h>
#undef gdk_draw_layout_line_with_colors
static void(*funcptr) (GdkDrawable * , GdkGC * , gint , gint , PangoLayoutLine * , const GdkColor * , const GdkColor * ) = 0;

extern int __lsb_check_params;
void gdk_draw_layout_line_with_colors (GdkDrawable * arg0 , GdkGC * arg1 , gint arg2 , gint arg3 , PangoLayoutLine * arg4 , const GdkColor * arg5 , const GdkColor * arg6 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_draw_layout_line_with_colors()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_draw_layout_line_with_colors");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_draw_layout_line_with_colors. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_draw_layout_line_with_colors() - validating");
		validate_RWaddress( arg0, "gdk_draw_layout_line_with_colors - arg0 (drawable)");
		validate_NULL_TYPETYPE(  arg0, "gdk_draw_layout_line_with_colors - arg0 (drawable)");
		validate_RWaddress( arg1, "gdk_draw_layout_line_with_colors - arg1 (gc)");
		validate_NULL_TYPETYPE(  arg1, "gdk_draw_layout_line_with_colors - arg1 (gc)");
		validate_NULL_TYPETYPE(  arg2, "gdk_draw_layout_line_with_colors - arg2 (x)");
		validate_NULL_TYPETYPE(  arg3, "gdk_draw_layout_line_with_colors - arg3 (y)");
		validate_RWaddress( arg4, "gdk_draw_layout_line_with_colors - arg4 (line)");
		validate_NULL_TYPETYPE(  arg4, "gdk_draw_layout_line_with_colors - arg4 (line)");
		validate_Rdaddress( arg5, "gdk_draw_layout_line_with_colors - arg5 (foreground)");
		validate_NULL_TYPETYPE(  arg5, "gdk_draw_layout_line_with_colors - arg5 (foreground)");
		validate_Rdaddress( arg6, "gdk_draw_layout_line_with_colors - arg6 (background)");
		validate_NULL_TYPETYPE(  arg6, "gdk_draw_layout_line_with_colors - arg6 (background)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
}
