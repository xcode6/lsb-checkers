// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_print_settings_get_print_pages
static GtkPrintPages(*funcptr) (GtkPrintSettings * ) = 0;

extern int __lsb_check_params;
GtkPrintPages gtk_print_settings_get_print_pages (GtkPrintSettings * arg0 )
{
	int reset_flag = __lsb_check_params;
	GtkPrintPages ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_print_settings_get_print_pages()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_print_settings_get_print_pages");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_print_settings_get_print_pages. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_print_settings_get_print_pages() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_print_settings_get_print_pages - arg0 (settings)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_print_settings_get_print_pages - arg0 (settings)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

