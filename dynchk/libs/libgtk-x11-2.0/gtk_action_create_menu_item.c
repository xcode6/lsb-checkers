// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_action_create_menu_item
static GtkWidget *(*funcptr) (GtkAction * ) = 0;

extern int __lsb_check_params;
GtkWidget * gtk_action_create_menu_item (GtkAction * arg0 )
{
	int reset_flag = __lsb_check_params;
	GtkWidget * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_action_create_menu_item()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_action_create_menu_item");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_action_create_menu_item. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_action_create_menu_item() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_action_create_menu_item - arg0 (action)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_action_create_menu_item - arg0 (action)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

