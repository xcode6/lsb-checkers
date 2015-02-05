// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/gdbusmessage.h>
#undef g_dbus_message_set_byte_order
static void(*funcptr) (GDBusMessage * , GDBusMessageByteOrder ) = 0;

extern int __lsb_check_params;
void g_dbus_message_set_byte_order (GDBusMessage * arg0 , GDBusMessageByteOrder arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_dbus_message_set_byte_order()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_dbus_message_set_byte_order");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_dbus_message_set_byte_order. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_dbus_message_set_byte_order() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_dbus_message_set_byte_order - arg0 (message)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_dbus_message_set_byte_order - arg0 (message)");
		validate_NULL_TYPETYPE(  arg1, "g_dbus_message_set_byte_order - arg1 (byte_order)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}
