// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <gtk-2.0/gtk/gtkenums.h>
#undef gtk_print_settings_get_length
static gdouble(*funcptr) (GtkPrintSettings * , const char * , GtkUnit ) = 0;

extern int __lsb_check_params;
gdouble gtk_print_settings_get_length (GtkPrintSettings * arg0 , const char * arg1 , GtkUnit arg2 )
{
	int reset_flag = __lsb_check_params;
	gdouble ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_print_settings_get_length()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_print_settings_get_length");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_print_settings_get_length. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_print_settings_get_length() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_print_settings_get_length - arg0 (settings)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_print_settings_get_length - arg0 (settings)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_print_settings_get_length - arg1 (key)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_print_settings_get_length - arg1 (key)");
		validate_NULL_TYPETYPE(  arg2, "gtk_print_settings_get_length - arg2 (unit)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

