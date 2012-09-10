// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_radio_menu_item_set_group
static void(*funcptr) (GtkRadioMenuItem * , GSList * ) = 0;

extern int __lsb_check_params;
void gtk_radio_menu_item_set_group (GtkRadioMenuItem * arg0 , GSList * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_radio_menu_item_set_group()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_radio_menu_item_set_group");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_radio_menu_item_set_group. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_radio_menu_item_set_group() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_radio_menu_item_set_group - arg0 (radio_menu_item)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_radio_menu_item_set_group - arg0 (radio_menu_item)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_radio_menu_item_set_group - arg1 (group)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_radio_menu_item_set_group - arg1 (group)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

