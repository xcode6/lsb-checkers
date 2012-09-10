// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_menu_tool_button_new
static GtkToolItem *(*funcptr) (GtkWidget * , const gchar * ) = 0;

extern int __lsb_check_params;
GtkToolItem * gtk_menu_tool_button_new (GtkWidget * arg0 , const gchar * arg1 )
{
	int reset_flag = __lsb_check_params;
	GtkToolItem * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_menu_tool_button_new()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_menu_tool_button_new");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_menu_tool_button_new. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_menu_tool_button_new() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_menu_tool_button_new - arg0 (icon_widget)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_menu_tool_button_new - arg0 (icon_widget)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_menu_tool_button_new - arg1 (label)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_menu_tool_button_new - arg1 (label)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

