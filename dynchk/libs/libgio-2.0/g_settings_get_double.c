// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gsettings.h>
#undef g_settings_get_double
static gdouble(*funcptr) (GSettings * , const gchar * ) = 0;

extern int __lsb_check_params;
gdouble g_settings_get_double (GSettings * arg0 , const gchar * arg1 )
{
	int reset_flag = __lsb_check_params;
	gdouble ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_settings_get_double()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_settings_get_double");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_settings_get_double. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_settings_get_double() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_settings_get_double - arg0 (settings)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_settings_get_double - arg0 (settings)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_settings_get_double - arg1 (key)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_settings_get_double - arg1 (key)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

