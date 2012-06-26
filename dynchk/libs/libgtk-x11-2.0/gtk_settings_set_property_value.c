// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_settings_set_property_value
static void(*funcptr) (GtkSettings * , const gchar * , const GtkSettingsValue * ) = 0;

extern int __lsb_check_params;
void gtk_settings_set_property_value (GtkSettings * arg0 , const gchar * arg1 , const GtkSettingsValue * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_settings_set_property_value()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_settings_set_property_value");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_settings_set_property_value. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_settings_set_property_value() - validating");
		validate_RWaddress( arg0, "gtk_settings_set_property_value - arg0 (settings)");
		validate_NULL_TYPETYPE(  arg0, "gtk_settings_set_property_value - arg0 (settings)");
		validate_Rdaddress( arg1, "gtk_settings_set_property_value - arg1 (name)");
		validate_NULL_TYPETYPE(  arg1, "gtk_settings_set_property_value - arg1 (name)");
		validate_Rdaddress( arg2, "gtk_settings_set_property_value - arg2 (svalue)");
		validate_NULL_TYPETYPE(  arg2, "gtk_settings_set_property_value - arg2 (svalue)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

