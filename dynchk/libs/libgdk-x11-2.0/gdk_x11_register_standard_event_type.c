// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#include <gtk-2.0/gdk/gdkx.h>
#undef gdk_x11_register_standard_event_type
static void(*funcptr) (GdkDisplay * , gint , gint ) = 0;

extern int __lsb_check_params;
void gdk_x11_register_standard_event_type (GdkDisplay * arg0 , gint arg1 , gint arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_x11_register_standard_event_type()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_x11_register_standard_event_type");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_x11_register_standard_event_type. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_x11_register_standard_event_type() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_x11_register_standard_event_type - arg0 (display)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_x11_register_standard_event_type - arg0 (display)");
		validate_NULL_TYPETYPE(  arg1, "gdk_x11_register_standard_event_type - arg1 (event_base)");
		validate_NULL_TYPETYPE(  arg2, "gdk_x11_register_standard_event_type - arg2 (n_events)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

