// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gdbusproxy.h>
#undef g_dbus_proxy_new_sync
static GDBusProxy *(*funcptr) (GDBusConnection * , GDBusProxyFlags , GDBusInterfaceInfo * , const gchar * , const gchar * , const gchar * , GCancellable * , GError * * ) = 0;

extern int __lsb_check_params;
GDBusProxy * g_dbus_proxy_new_sync (GDBusConnection * arg0 , GDBusProxyFlags arg1 , GDBusInterfaceInfo * arg2 , const gchar * arg3 , const gchar * arg4 , const gchar * arg5 , GCancellable * arg6 , GError * * arg7 )
{
	int reset_flag = __lsb_check_params;
	GDBusProxy * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_dbus_proxy_new_sync()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_dbus_proxy_new_sync");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_dbus_proxy_new_sync. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_dbus_proxy_new_sync() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_dbus_proxy_new_sync - arg0 (connection)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_dbus_proxy_new_sync - arg0 (connection)");
		validate_NULL_TYPETYPE(  arg1, "g_dbus_proxy_new_sync - arg1 (flags)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_dbus_proxy_new_sync - arg2 (info)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_dbus_proxy_new_sync - arg2 (info)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "g_dbus_proxy_new_sync - arg3 (name)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_dbus_proxy_new_sync - arg3 (name)");
		if( arg4 ) {
		validate_Rdaddress( arg4, "g_dbus_proxy_new_sync - arg4 (object_path)");
		}
		validate_NULL_TYPETYPE(  arg4, "g_dbus_proxy_new_sync - arg4 (object_path)");
		if( arg5 ) {
		validate_Rdaddress( arg5, "g_dbus_proxy_new_sync - arg5 (interface_name)");
		}
		validate_NULL_TYPETYPE(  arg5, "g_dbus_proxy_new_sync - arg5 (interface_name)");
		if( arg6 ) {
		validate_RWaddress( arg6, "g_dbus_proxy_new_sync - arg6 (cancellable)");
		}
		validate_NULL_TYPETYPE(  arg6, "g_dbus_proxy_new_sync - arg6 (cancellable)");
		if( arg7 ) {
		validate_RWaddress( arg7, "g_dbus_proxy_new_sync - arg7 (error)");
		}
		validate_NULL_TYPETYPE(  arg7, "g_dbus_proxy_new_sync - arg7 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
	__lsb_check_params = reset_flag;
	return ret_value;
}

