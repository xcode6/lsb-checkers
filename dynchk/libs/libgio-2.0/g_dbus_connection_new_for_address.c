// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gdbusconnection.h>
#undef g_dbus_connection_new_for_address
static void(*funcptr) (const gchar * , GDBusConnectionFlags , GDBusAuthObserver * , GCancellable * , GAsyncReadyCallback , gpointer ) = 0;

extern int __lsb_check_params;
void g_dbus_connection_new_for_address (const gchar * arg0 , GDBusConnectionFlags arg1 , GDBusAuthObserver * arg2 , GCancellable * arg3 , GAsyncReadyCallback arg4 , gpointer arg5 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_dbus_connection_new_for_address()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_dbus_connection_new_for_address");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_dbus_connection_new_for_address. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_dbus_connection_new_for_address() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_dbus_connection_new_for_address - arg0 (address)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_dbus_connection_new_for_address - arg0 (address)");
		validate_NULL_TYPETYPE(  arg1, "g_dbus_connection_new_for_address - arg1 (flags)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_dbus_connection_new_for_address - arg2 (observer)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_dbus_connection_new_for_address - arg2 (observer)");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_dbus_connection_new_for_address - arg3 (cancellable)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_dbus_connection_new_for_address - arg3 (cancellable)");
		validate_NULL_TYPETYPE(  arg4, "g_dbus_connection_new_for_address - arg4 (callback)");
		validate_NULL_TYPETYPE(  arg5, "g_dbus_connection_new_for_address - arg5 (user_data)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}

