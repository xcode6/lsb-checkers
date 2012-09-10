// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_radio_button_new_from_widget
static GtkWidget *(*funcptr) (GtkRadioButton * ) = 0;

extern int __lsb_check_params;
GtkWidget * gtk_radio_button_new_from_widget (GtkRadioButton * arg0 )
{
	int reset_flag = __lsb_check_params;
	GtkWidget * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_radio_button_new_from_widget()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_radio_button_new_from_widget");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_radio_button_new_from_widget. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_radio_button_new_from_widget() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_radio_button_new_from_widget - arg0 (radio_group_member)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_radio_button_new_from_widget - arg0 (radio_group_member)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

