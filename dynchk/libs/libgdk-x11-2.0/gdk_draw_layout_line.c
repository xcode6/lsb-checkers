// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#include <pango-1.0/pango/pango.h>
#undef gdk_draw_layout_line
static void(*funcptr) (GdkDrawable * , GdkGC * , gint , gint , PangoLayoutLine * ) = 0;

extern int __lsb_check_params;
void gdk_draw_layout_line (GdkDrawable * arg0 , GdkGC * arg1 , gint arg2 , gint arg3 , PangoLayoutLine * arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_draw_layout_line()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_draw_layout_line");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_draw_layout_line. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_draw_layout_line() - validating");
		validate_RWaddress( arg0, "gdk_draw_layout_line - arg0 (drawable)");
		validate_NULL_TYPETYPE(  arg0, "gdk_draw_layout_line - arg0 (drawable)");
		validate_RWaddress( arg1, "gdk_draw_layout_line - arg1 (gc)");
		validate_NULL_TYPETYPE(  arg1, "gdk_draw_layout_line - arg1 (gc)");
		validate_NULL_TYPETYPE(  arg2, "gdk_draw_layout_line - arg2 (x)");
		validate_NULL_TYPETYPE(  arg3, "gdk_draw_layout_line - arg3 (y)");
		validate_RWaddress( arg4, "gdk_draw_layout_line - arg4 (line)");
		validate_NULL_TYPETYPE(  arg4, "gdk_draw_layout_line - arg4 (line)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

