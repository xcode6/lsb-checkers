// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_window_begin_move_drag
static void(*funcptr) (GdkWindow * , gint , gint , gint , guint32 ) = 0;

extern int __lsb_check_params;
void gdk_window_begin_move_drag (GdkWindow * arg0 , gint arg1 , gint arg2 , gint arg3 , guint32 arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_window_begin_move_drag()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_window_begin_move_drag");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_window_begin_move_drag. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_window_begin_move_drag() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_window_begin_move_drag - arg0 (window)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_window_begin_move_drag - arg0 (window)");
		validate_NULL_TYPETYPE(  arg1, "gdk_window_begin_move_drag - arg1 (button)");
		validate_NULL_TYPETYPE(  arg2, "gdk_window_begin_move_drag - arg2 (root_x)");
		validate_NULL_TYPETYPE(  arg3, "gdk_window_begin_move_drag - arg3 (root_y)");
		validate_NULL_TYPETYPE(  arg4, "gdk_window_begin_move_drag - arg4 (timestamp)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

