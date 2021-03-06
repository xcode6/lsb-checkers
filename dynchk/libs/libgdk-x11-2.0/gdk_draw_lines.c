// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_draw_lines
static void(*funcptr) (GdkDrawable * , GdkGC * , const GdkPoint * , gint ) = 0;

extern int __lsb_check_params;
void gdk_draw_lines (GdkDrawable * arg0 , GdkGC * arg1 , const GdkPoint * arg2 , gint arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_draw_lines()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_draw_lines");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_draw_lines. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_draw_lines() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_draw_lines - arg0 (drawable)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_draw_lines - arg0 (drawable)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_draw_lines - arg1 (gc)");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_draw_lines - arg1 (gc)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "gdk_draw_lines - arg2 (points)");
		}
		validate_NULL_TYPETYPE(  arg2, "gdk_draw_lines - arg2 (points)");
		validate_NULL_TYPETYPE(  arg3, "gdk_draw_lines - arg3 (npoints)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

