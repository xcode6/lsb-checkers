// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_device_get_axis
static gboolean(*funcptr) (GdkDevice * , gdouble * , GdkAxisUse , gdouble * ) = 0;

extern int __lsb_check_params;
gboolean gdk_device_get_axis (GdkDevice * arg0 , gdouble * arg1 , GdkAxisUse arg2 , gdouble * arg3 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_device_get_axis()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_device_get_axis");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_device_get_axis. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_device_get_axis() - validating");
		validate_RWaddress( arg0, "gdk_device_get_axis - arg0 (device)");
		validate_NULL_TYPETYPE(  arg0, "gdk_device_get_axis - arg0 (device)");
		validate_RWaddress( arg1, "gdk_device_get_axis - arg1 (axes)");
		validate_NULL_TYPETYPE(  arg1, "gdk_device_get_axis - arg1 (axes)");
		validate_NULL_TYPETYPE(  arg2, "gdk_device_get_axis - arg2 (use)");
		validate_RWaddress( arg3, "gdk_device_get_axis - arg3 (value)");
		validate_NULL_TYPETYPE(  arg3, "gdk_device_get_axis - arg3 (value)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

