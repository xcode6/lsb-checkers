// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_screen_get_monitor_geometry
static void(*funcptr) (GdkScreen * , gint , GdkRectangle * ) = 0;

extern int __lsb_check_params;
void gdk_screen_get_monitor_geometry (GdkScreen * arg0 , gint arg1 , GdkRectangle * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_screen_get_monitor_geometry()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_screen_get_monitor_geometry");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_screen_get_monitor_geometry. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_screen_get_monitor_geometry() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_screen_get_monitor_geometry - arg0 (screen)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_screen_get_monitor_geometry - arg0 (screen)");
		validate_NULL_TYPETYPE(  arg1, "gdk_screen_get_monitor_geometry - arg1 (monitor_num)");
		if( arg2 ) {
		validate_RWaddress( arg2, "gdk_screen_get_monitor_geometry - arg2 (dest)");
		}
		validate_NULL_TYPETYPE(  arg2, "gdk_screen_get_monitor_geometry - arg2 (dest)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

