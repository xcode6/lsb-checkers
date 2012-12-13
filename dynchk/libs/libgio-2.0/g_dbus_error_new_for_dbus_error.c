// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gdbuserror.h>
#undef g_dbus_error_new_for_dbus_error
static GError *(*funcptr) (const gchar * , const gchar * ) = 0;

extern int __lsb_check_params;
GError * g_dbus_error_new_for_dbus_error (const gchar * arg0 , const gchar * arg1 )
{
	int reset_flag = __lsb_check_params;
	GError * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_dbus_error_new_for_dbus_error()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_dbus_error_new_for_dbus_error");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_dbus_error_new_for_dbus_error. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_dbus_error_new_for_dbus_error() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_dbus_error_new_for_dbus_error - arg0 (dbus_error_name)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_dbus_error_new_for_dbus_error - arg0 (dbus_error_name)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_dbus_error_new_for_dbus_error - arg1 (dbus_error_message)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_dbus_error_new_for_dbus_error - arg1 (dbus_error_message)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

