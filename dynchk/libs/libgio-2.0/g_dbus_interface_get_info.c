// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gdbusinterface.h>
#undef g_dbus_interface_get_info
static GDBusInterfaceInfo *(*funcptr) (GDBusInterface * ) = 0;

extern int __lsb_check_params;
GDBusInterfaceInfo * g_dbus_interface_get_info (GDBusInterface * arg0 )
{
	int reset_flag = __lsb_check_params;
	GDBusInterfaceInfo * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_dbus_interface_get_info()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_dbus_interface_get_info");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_dbus_interface_get_info. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_dbus_interface_get_info() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_dbus_interface_get_info - arg0 (interface_)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_dbus_interface_get_info - arg0 (interface_)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
