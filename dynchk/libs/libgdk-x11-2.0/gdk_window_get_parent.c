// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_window_get_parent
static GdkWindow *(*funcptr) (GdkWindow * ) = 0;

extern int __lsb_check_params;
GdkWindow * gdk_window_get_parent (GdkWindow * arg0 )
{
	int reset_flag = __lsb_check_params;
	GdkWindow * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_window_get_parent()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_window_get_parent");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_window_get_parent. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_window_get_parent() - validating");
		validate_RWaddress( arg0, "gdk_window_get_parent - arg0 (window)");
		validate_NULL_TYPETYPE(  arg0, "gdk_window_get_parent - arg0 (window)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

