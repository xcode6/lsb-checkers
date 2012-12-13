// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/gdbusutils.h>
#undef g_dbus_generate_guid
static gchar *(*funcptr) () = 0;

extern int __lsb_check_params;
gchar * g_dbus_generate_guid ()
{
	int reset_flag = __lsb_check_params;
	gchar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_dbus_generate_guid()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_dbus_generate_guid");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_dbus_generate_guid. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_dbus_generate_guid() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

