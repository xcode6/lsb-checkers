// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gdbusmethodinvocation.h>
#undef g_dbus_method_invocation_get_object_path
static const char *(*funcptr) (GDBusMethodInvocation * ) = 0;

extern int __lsb_check_params;
const char * g_dbus_method_invocation_get_object_path (GDBusMethodInvocation * arg0 )
{
	int reset_flag = __lsb_check_params;
	const char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_dbus_method_invocation_get_object_path()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_dbus_method_invocation_get_object_path");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_dbus_method_invocation_get_object_path. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_dbus_method_invocation_get_object_path() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_dbus_method_invocation_get_object_path - arg0 (invocation)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_dbus_method_invocation_get_object_path - arg0 (invocation)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

