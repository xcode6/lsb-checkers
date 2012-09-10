// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_draw_polygon
static void(*funcptr) (GdkDrawable * , GdkGC * , gboolean , const GdkPoint * , gint ) = 0;

extern int __lsb_check_params;
void gdk_draw_polygon (GdkDrawable * arg0 , GdkGC * arg1 , gboolean arg2 , const GdkPoint * arg3 , gint arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_draw_polygon()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_draw_polygon");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_draw_polygon. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_draw_polygon() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_draw_polygon - arg0 (drawable)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_draw_polygon - arg0 (drawable)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_draw_polygon - arg1 (gc)");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_draw_polygon - arg1 (gc)");
		validate_NULL_TYPETYPE(  arg2, "gdk_draw_polygon - arg2 (filled)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "gdk_draw_polygon - arg3 (points)");
		}
		validate_NULL_TYPETYPE(  arg3, "gdk_draw_polygon - arg3 (points)");
		validate_NULL_TYPETYPE(  arg4, "gdk_draw_polygon - arg4 (npoints)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

