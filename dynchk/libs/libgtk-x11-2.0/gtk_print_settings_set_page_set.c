// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <gtk-2.0/gtk/gtkenums.h>
#undef gtk_print_settings_set_page_set
static void(*funcptr) (GtkPrintSettings * , GtkPageSet ) = 0;

extern int __lsb_check_params;
void gtk_print_settings_set_page_set (GtkPrintSettings * arg0 , GtkPageSet arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_print_settings_set_page_set()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_print_settings_set_page_set");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_print_settings_set_page_set. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_print_settings_set_page_set() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_print_settings_set_page_set - arg0 (settings)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_print_settings_set_page_set - arg0 (settings)");
		validate_NULL_TYPETYPE(  arg1, "gtk_print_settings_set_page_set - arg1 (page_set)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}
