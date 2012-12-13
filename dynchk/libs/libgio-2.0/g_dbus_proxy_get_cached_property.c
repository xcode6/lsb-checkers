// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gdbusproxy.h>
#undef g_dbus_proxy_get_cached_property
static GVariant *(*funcptr) (GDBusProxy * , const gchar * ) = 0;

extern int __lsb_check_params;
GVariant * g_dbus_proxy_get_cached_property (GDBusProxy * arg0 , const gchar * arg1 )
{
	int reset_flag = __lsb_check_params;
	GVariant * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_dbus_proxy_get_cached_property()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_dbus_proxy_get_cached_property");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_dbus_proxy_get_cached_property. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_dbus_proxy_get_cached_property() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_dbus_proxy_get_cached_property - arg0 (proxy)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_dbus_proxy_get_cached_property - arg0 (proxy)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_dbus_proxy_get_cached_property - arg1 (property_name)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_dbus_proxy_get_cached_property - arg1 (property_name)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

