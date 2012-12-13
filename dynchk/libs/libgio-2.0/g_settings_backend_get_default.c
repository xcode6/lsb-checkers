// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/gsettingsbackend.h>
#undef g_settings_backend_get_default
static GSettingsBackend *(*funcptr) () = 0;

extern int __lsb_check_params;
GSettingsBackend * g_settings_backend_get_default ()
{
	int reset_flag = __lsb_check_params;
	GSettingsBackend * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_settings_backend_get_default()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_settings_backend_get_default");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_settings_backend_get_default. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_settings_backend_get_default() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

