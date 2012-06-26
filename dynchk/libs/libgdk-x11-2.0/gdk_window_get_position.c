// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_window_get_position
static void(*funcptr) (GdkWindow * , gint * , gint * ) = 0;

extern int __lsb_check_params;
void gdk_window_get_position (GdkWindow * arg0 , gint * arg1 , gint * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_window_get_position()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_window_get_position");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_window_get_position. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_window_get_position() - validating");
		validate_RWaddress( arg0, "gdk_window_get_position - arg0 (window)");
		validate_NULL_TYPETYPE(  arg0, "gdk_window_get_position - arg0 (window)");
		validate_RWaddress( arg1, "gdk_window_get_position - arg1 (x)");
		validate_NULL_TYPETYPE(  arg1, "gdk_window_get_position - arg1 (x)");
		validate_RWaddress( arg2, "gdk_window_get_position - arg2 (y)");
		validate_NULL_TYPETYPE(  arg2, "gdk_window_get_position - arg2 (y)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

