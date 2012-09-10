// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_event_get_root_coords
static gboolean(*funcptr) (const GdkEvent * , gdouble * , gdouble * ) = 0;

extern int __lsb_check_params;
gboolean gdk_event_get_root_coords (const GdkEvent * arg0 , gdouble * arg1 , gdouble * arg2 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_event_get_root_coords()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_event_get_root_coords");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_event_get_root_coords. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_event_get_root_coords() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "gdk_event_get_root_coords - arg0 (event)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_event_get_root_coords - arg0 (event)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_event_get_root_coords - arg1 (x_root)");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_event_get_root_coords - arg1 (x_root)");
		if( arg2 ) {
		validate_RWaddress( arg2, "gdk_event_get_root_coords - arg2 (y_root)");
		}
		validate_NULL_TYPETYPE(  arg2, "gdk_event_get_root_coords - arg2 (y_root)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

