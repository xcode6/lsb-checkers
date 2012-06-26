// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_window_set_static_gravities
static gboolean(*funcptr) (GdkWindow * , gboolean ) = 0;

extern int __lsb_check_params;
gboolean gdk_window_set_static_gravities (GdkWindow * arg0 , gboolean arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_window_set_static_gravities()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_window_set_static_gravities");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_window_set_static_gravities. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_window_set_static_gravities() - validating");
		validate_RWaddress( arg0, "gdk_window_set_static_gravities - arg0 (window)");
		validate_NULL_TYPETYPE(  arg0, "gdk_window_set_static_gravities - arg0 (window)");
		validate_NULL_TYPETYPE(  arg1, "gdk_window_set_static_gravities - arg1 (use_static)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

