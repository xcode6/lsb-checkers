// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_display_get_event
static GdkEvent *(*funcptr) (GdkDisplay * ) = 0;

extern int __lsb_check_params;
GdkEvent * gdk_display_get_event (GdkDisplay * arg0 )
{
	int reset_flag = __lsb_check_params;
	GdkEvent * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_display_get_event()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_display_get_event");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_display_get_event. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_display_get_event() - validating");
		validate_RWaddress( arg0, "gdk_display_get_event - arg0 (display)");
		validate_NULL_TYPETYPE(  arg0, "gdk_display_get_event - arg0 (display)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

