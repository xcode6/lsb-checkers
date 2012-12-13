// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gdbusproxy.h>
#undef g_dbus_proxy_new
static void(*funcptr) (GDBusConnection * , GDBusProxyFlags , GDBusInterfaceInfo * , const gchar * , const gchar * , const gchar * , GCancellable * , GAsyncReadyCallback , gpointer ) = 0;

extern int __lsb_check_params;
void g_dbus_proxy_new (GDBusConnection * arg0 , GDBusProxyFlags arg1 , GDBusInterfaceInfo * arg2 , const gchar * arg3 , const gchar * arg4 , const gchar * arg5 , GCancellable * arg6 , GAsyncReadyCallback arg7 , gpointer arg8 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_dbus_proxy_new()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_dbus_proxy_new");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_dbus_proxy_new. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_dbus_proxy_new() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_dbus_proxy_new - arg0 (connection)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_dbus_proxy_new - arg0 (connection)");
		validate_NULL_TYPETYPE(  arg1, "g_dbus_proxy_new - arg1 (flags)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_dbus_proxy_new - arg2 (info)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_dbus_proxy_new - arg2 (info)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "g_dbus_proxy_new - arg3 (name)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_dbus_proxy_new - arg3 (name)");
		if( arg4 ) {
		validate_Rdaddress( arg4, "g_dbus_proxy_new - arg4 (object_path)");
		}
		validate_NULL_TYPETYPE(  arg4, "g_dbus_proxy_new - arg4 (object_path)");
		if( arg5 ) {
		validate_Rdaddress( arg5, "g_dbus_proxy_new - arg5 (interface_name)");
		}
		validate_NULL_TYPETYPE(  arg5, "g_dbus_proxy_new - arg5 (interface_name)");
		if( arg6 ) {
		validate_RWaddress( arg6, "g_dbus_proxy_new - arg6 (cancellable)");
		}
		validate_NULL_TYPETYPE(  arg6, "g_dbus_proxy_new - arg6 (cancellable)");
		validate_NULL_TYPETYPE(  arg7, "g_dbus_proxy_new - arg7 (callback)");
		validate_NULL_TYPETYPE(  arg8, "g_dbus_proxy_new - arg8 (user_data)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
	__lsb_check_params = reset_flag;
}

