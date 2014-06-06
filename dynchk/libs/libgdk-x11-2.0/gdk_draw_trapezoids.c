// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_draw_trapezoids
static void(*funcptr) (GdkDrawable * , GdkGC * , const GdkTrapezoid * , gint ) = 0;

extern int __lsb_check_params;
void gdk_draw_trapezoids (GdkDrawable * arg0 , GdkGC * arg1 , const GdkTrapezoid * arg2 , gint arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_draw_trapezoids()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_draw_trapezoids");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_draw_trapezoids. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_draw_trapezoids() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_draw_trapezoids - arg0 (drawable)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_draw_trapezoids - arg0 (drawable)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_draw_trapezoids - arg1 (gc)");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_draw_trapezoids - arg1 (gc)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "gdk_draw_trapezoids - arg2 (trapezoids)");
		}
		validate_NULL_TYPETYPE(  arg2, "gdk_draw_trapezoids - arg2 (trapezoids)");
		validate_NULL_TYPETYPE(  arg3, "gdk_draw_trapezoids - arg3 (n_trapezoids)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

