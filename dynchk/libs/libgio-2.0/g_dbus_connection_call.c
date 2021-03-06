// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/gdbusconnection.h>
#undef g_dbus_connection_call
static void(*funcptr) (GDBusConnection * , const gchar * , const gchar * , const gchar * , const gchar * , GVariant * , const GVariantType * , GDBusCallFlags , gint , GCancellable * , GAsyncReadyCallback , gpointer ) = 0;

extern int __lsb_check_params;
void g_dbus_connection_call (GDBusConnection * arg0 , const gchar * arg1 , const gchar * arg2 , const gchar * arg3 , const gchar * arg4 , GVariant * arg5 , const GVariantType * arg6 , GDBusCallFlags arg7 , gint arg8 , GCancellable * arg9 , GAsyncReadyCallback arg10 , gpointer arg11 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_dbus_connection_call()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_dbus_connection_call");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_dbus_connection_call. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_dbus_connection_call() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_dbus_connection_call - arg0 (connection)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_dbus_connection_call - arg0 (connection)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_dbus_connection_call - arg1 (bus_name)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_dbus_connection_call - arg1 (bus_name)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "g_dbus_connection_call - arg2 (object_path)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_dbus_connection_call - arg2 (object_path)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "g_dbus_connection_call - arg3 (interface_name)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_dbus_connection_call - arg3 (interface_name)");
		if( arg4 ) {
		validate_Rdaddress( arg4, "g_dbus_connection_call - arg4 (method_name)");
		}
		validate_NULL_TYPETYPE(  arg4, "g_dbus_connection_call - arg4 (method_name)");
		if( arg5 ) {
		validate_RWaddress( arg5, "g_dbus_connection_call - arg5 (parameters)");
		}
		validate_NULL_TYPETYPE(  arg5, "g_dbus_connection_call - arg5 (parameters)");
		if( arg6 ) {
		validate_Rdaddress( arg6, "g_dbus_connection_call - arg6 (reply_type)");
		}
		validate_NULL_TYPETYPE(  arg6, "g_dbus_connection_call - arg6 (reply_type)");
		validate_NULL_TYPETYPE(  arg7, "g_dbus_connection_call - arg7 (flags)");
		validate_NULL_TYPETYPE(  arg8, "g_dbus_connection_call - arg8 (timeout_msec)");
		if( arg9 ) {
		validate_RWaddress( arg9, "g_dbus_connection_call - arg9 (cancellable)");
		}
		validate_NULL_TYPETYPE(  arg9, "g_dbus_connection_call - arg9 (cancellable)");
		validate_NULL_TYPETYPE(  arg10, "g_dbus_connection_call - arg10 (callback)");
		validate_NULL_TYPETYPE(  arg11, "g_dbus_connection_call - arg11 (user_data)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
	__lsb_check_params = reset_flag;
}

