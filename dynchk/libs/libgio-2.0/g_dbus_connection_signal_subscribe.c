// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/gdbusconnection.h>
#undef g_dbus_connection_signal_subscribe
static guint(*funcptr) (GDBusConnection * , const gchar * , const gchar * , const gchar * , const gchar * , const gchar * , GDBusSignalFlags , GDBusSignalCallback , void * , GDestroyNotify ) = 0;

extern int __lsb_check_params;
guint g_dbus_connection_signal_subscribe (GDBusConnection * arg0 , const gchar * arg1 , const gchar * arg2 , const gchar * arg3 , const gchar * arg4 , const gchar * arg5 , GDBusSignalFlags arg6 , GDBusSignalCallback arg7 , void * arg8 , GDestroyNotify arg9 )
{
	int reset_flag = __lsb_check_params;
	guint ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_dbus_connection_signal_subscribe()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_dbus_connection_signal_subscribe");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_dbus_connection_signal_subscribe. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_dbus_connection_signal_subscribe() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_dbus_connection_signal_subscribe - arg0 (connection)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_dbus_connection_signal_subscribe - arg0 (connection)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_dbus_connection_signal_subscribe - arg1 (sender)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_dbus_connection_signal_subscribe - arg1 (sender)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "g_dbus_connection_signal_subscribe - arg2 (interface_name)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_dbus_connection_signal_subscribe - arg2 (interface_name)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "g_dbus_connection_signal_subscribe - arg3 (member)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_dbus_connection_signal_subscribe - arg3 (member)");
		if( arg4 ) {
		validate_Rdaddress( arg4, "g_dbus_connection_signal_subscribe - arg4 (object_path)");
		}
		validate_NULL_TYPETYPE(  arg4, "g_dbus_connection_signal_subscribe - arg4 (object_path)");
		if( arg5 ) {
		validate_Rdaddress( arg5, "g_dbus_connection_signal_subscribe - arg5 (arg0)");
		}
		validate_NULL_TYPETYPE(  arg5, "g_dbus_connection_signal_subscribe - arg5 (arg0)");
		validate_NULL_TYPETYPE(  arg6, "g_dbus_connection_signal_subscribe - arg6 (flags)");
		validate_NULL_TYPETYPE(  arg7, "g_dbus_connection_signal_subscribe - arg7 (callback)");
		if( arg8 ) {
		validate_RWaddress( arg8, "g_dbus_connection_signal_subscribe - arg8 (user_data)");
		}
		validate_NULL_TYPETYPE(  arg8, "g_dbus_connection_signal_subscribe - arg8 (user_data)");
		validate_NULL_TYPETYPE(  arg9, "g_dbus_connection_signal_subscribe - arg9 (user_data_free_func)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
	__lsb_check_params = reset_flag;
	return ret_value;
}

