// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_draw_rectangle
static void(*funcptr) (GdkDrawable * , GdkGC * , gboolean , gint , gint , gint , gint ) = 0;

extern int __lsb_check_params;
void gdk_draw_rectangle (GdkDrawable * arg0 , GdkGC * arg1 , gboolean arg2 , gint arg3 , gint arg4 , gint arg5 , gint arg6 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_draw_rectangle()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_draw_rectangle");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_draw_rectangle. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_draw_rectangle() - validating");
		validate_RWaddress( arg0, "gdk_draw_rectangle - arg0 (drawable)");
		validate_NULL_TYPETYPE(  arg0, "gdk_draw_rectangle - arg0 (drawable)");
		validate_RWaddress( arg1, "gdk_draw_rectangle - arg1 (gc)");
		validate_NULL_TYPETYPE(  arg1, "gdk_draw_rectangle - arg1 (gc)");
		validate_NULL_TYPETYPE(  arg2, "gdk_draw_rectangle - arg2 (filled)");
		validate_NULL_TYPETYPE(  arg3, "gdk_draw_rectangle - arg3 (x)");
		validate_NULL_TYPETYPE(  arg4, "gdk_draw_rectangle - arg4 (y)");
		validate_NULL_TYPETYPE(  arg5, "gdk_draw_rectangle - arg5 (width)");
		validate_NULL_TYPETYPE(  arg6, "gdk_draw_rectangle - arg6 (height)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
}
