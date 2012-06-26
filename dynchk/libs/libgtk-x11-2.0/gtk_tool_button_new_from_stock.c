// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_tool_button_new_from_stock
static GtkToolItem *(*funcptr) (const gchar * ) = 0;

extern int __lsb_check_params;
GtkToolItem * gtk_tool_button_new_from_stock (const gchar * arg0 )
{
	int reset_flag = __lsb_check_params;
	GtkToolItem * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_tool_button_new_from_stock()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tool_button_new_from_stock");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tool_button_new_from_stock. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tool_button_new_from_stock() - validating");
		validate_Rdaddress( arg0, "gtk_tool_button_new_from_stock - arg0 (stock_id)");
		validate_NULL_TYPETYPE(  arg0, "gtk_tool_button_new_from_stock - arg0 (stock_id)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

