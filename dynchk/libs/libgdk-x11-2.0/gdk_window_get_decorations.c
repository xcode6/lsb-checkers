// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_window_get_decorations
static gboolean(*funcptr) (GdkWindow * , GdkWMDecoration * ) = 0;

extern int __lsb_check_params;
gboolean gdk_window_get_decorations (GdkWindow * arg0 , GdkWMDecoration * arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_window_get_decorations()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_window_get_decorations");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_window_get_decorations. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_window_get_decorations() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_window_get_decorations - arg0 (window)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_window_get_decorations - arg0 (window)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_window_get_decorations - arg1 (decorations)");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_window_get_decorations - arg1 (decorations)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
