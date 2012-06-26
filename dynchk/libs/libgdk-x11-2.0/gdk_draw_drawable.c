// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_draw_drawable
static void(*funcptr) (GdkDrawable * , GdkGC * , GdkDrawable * , gint , gint , gint , gint , gint , gint ) = 0;

extern int __lsb_check_params;
void gdk_draw_drawable (GdkDrawable * arg0 , GdkGC * arg1 , GdkDrawable * arg2 , gint arg3 , gint arg4 , gint arg5 , gint arg6 , gint arg7 , gint arg8 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_draw_drawable()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_draw_drawable");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_draw_drawable. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_draw_drawable() - validating");
		validate_RWaddress( arg0, "gdk_draw_drawable - arg0 (drawable)");
		validate_NULL_TYPETYPE(  arg0, "gdk_draw_drawable - arg0 (drawable)");
		validate_RWaddress( arg1, "gdk_draw_drawable - arg1 (gc)");
		validate_NULL_TYPETYPE(  arg1, "gdk_draw_drawable - arg1 (gc)");
		validate_RWaddress( arg2, "gdk_draw_drawable - arg2 (src)");
		validate_NULL_TYPETYPE(  arg2, "gdk_draw_drawable - arg2 (src)");
		validate_NULL_TYPETYPE(  arg3, "gdk_draw_drawable - arg3 (xsrc)");
		validate_NULL_TYPETYPE(  arg4, "gdk_draw_drawable - arg4 (ysrc)");
		validate_NULL_TYPETYPE(  arg5, "gdk_draw_drawable - arg5 (xdest)");
		validate_NULL_TYPETYPE(  arg6, "gdk_draw_drawable - arg6 (ydest)");
		validate_NULL_TYPETYPE(  arg7, "gdk_draw_drawable - arg7 (width)");
		validate_NULL_TYPETYPE(  arg8, "gdk_draw_drawable - arg8 (height)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
	__lsb_check_params = reset_flag;
}

