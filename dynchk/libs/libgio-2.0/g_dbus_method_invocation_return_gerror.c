// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gdbusmethodinvocation.h>
#undef g_dbus_method_invocation_return_gerror
static void(*funcptr) (GDBusMethodInvocation * , const GError * ) = 0;

extern int __lsb_check_params;
void g_dbus_method_invocation_return_gerror (GDBusMethodInvocation * arg0 , const GError * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_dbus_method_invocation_return_gerror()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_dbus_method_invocation_return_gerror");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_dbus_method_invocation_return_gerror. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_dbus_method_invocation_return_gerror() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_dbus_method_invocation_return_gerror - arg0 (invocation)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_dbus_method_invocation_return_gerror - arg0 (invocation)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_dbus_method_invocation_return_gerror - arg1 (error)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_dbus_method_invocation_return_gerror - arg1 (error)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

