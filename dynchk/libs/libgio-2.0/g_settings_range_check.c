// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gsettings.h>
#undef g_settings_range_check
static gboolean(*funcptr) (GSettings * , const gchar * , GVariant * ) = 0;

extern int __lsb_check_params;
gboolean g_settings_range_check (GSettings * arg0 , const gchar * arg1 , GVariant * arg2 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_settings_range_check()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_settings_range_check");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_settings_range_check. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_settings_range_check() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_settings_range_check - arg0 (settings)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_settings_range_check - arg0 (settings)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_settings_range_check - arg1 (key)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_settings_range_check - arg1 (key)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_settings_range_check - arg2 (value)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_settings_range_check - arg2 (value)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

