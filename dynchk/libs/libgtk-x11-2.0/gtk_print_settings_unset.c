// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_print_settings_unset
static void(*funcptr) (GtkPrintSettings * , const char * ) = 0;

extern int __lsb_check_params;
void gtk_print_settings_unset (GtkPrintSettings * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_print_settings_unset()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_print_settings_unset");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_print_settings_unset. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_print_settings_unset() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_print_settings_unset - arg0 (settings)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_print_settings_unset - arg0 (settings)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_print_settings_unset - arg1 (key)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_print_settings_unset - arg1 (key)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

