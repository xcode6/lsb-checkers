// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_radio_button_join_group
static void(*funcptr) (GtkRadioButton * , GtkRadioButton * ) = 0;

extern int __lsb_check_params;
void gtk_radio_button_join_group (GtkRadioButton * arg0 , GtkRadioButton * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_radio_button_join_group()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_radio_button_join_group");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_radio_button_join_group. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_radio_button_join_group() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_radio_button_join_group - arg0 (radio_button)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_radio_button_join_group - arg0 (radio_button)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_radio_button_join_group - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_radio_button_join_group - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}
