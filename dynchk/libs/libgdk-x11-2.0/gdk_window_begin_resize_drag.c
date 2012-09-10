// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_window_begin_resize_drag
static void(*funcptr) (GdkWindow * , GdkWindowEdge , gint , gint , gint , guint32 ) = 0;

extern int __lsb_check_params;
void gdk_window_begin_resize_drag (GdkWindow * arg0 , GdkWindowEdge arg1 , gint arg2 , gint arg3 , gint arg4 , guint32 arg5 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_window_begin_resize_drag()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_window_begin_resize_drag");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_window_begin_resize_drag. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_window_begin_resize_drag() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_window_begin_resize_drag - arg0 (window)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_window_begin_resize_drag - arg0 (window)");
		validate_NULL_TYPETYPE(  arg1, "gdk_window_begin_resize_drag - arg1 (edge)");
		validate_NULL_TYPETYPE(  arg2, "gdk_window_begin_resize_drag - arg2 (button)");
		validate_NULL_TYPETYPE(  arg3, "gdk_window_begin_resize_drag - arg3 (root_x)");
		validate_NULL_TYPETYPE(  arg4, "gdk_window_begin_resize_drag - arg4 (root_y)");
		validate_NULL_TYPETYPE(  arg5, "gdk_window_begin_resize_drag - arg5 (timestamp)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}

