// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_tool_item_set_tooltip
static void(*funcptr) (GtkToolItem * , GtkTooltips * , const gchar * , const gchar * ) = 0;

extern int __lsb_check_params;
void gtk_tool_item_set_tooltip (GtkToolItem * arg0 , GtkTooltips * arg1 , const gchar * arg2 , const gchar * arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_tool_item_set_tooltip()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tool_item_set_tooltip");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tool_item_set_tooltip. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tool_item_set_tooltip() - validating");
		validate_RWaddress( arg0, "gtk_tool_item_set_tooltip - arg0 (tool_item)");
		validate_NULL_TYPETYPE(  arg0, "gtk_tool_item_set_tooltip - arg0 (tool_item)");
		validate_RWaddress( arg1, "gtk_tool_item_set_tooltip - arg1 (tooltips)");
		validate_NULL_TYPETYPE(  arg1, "gtk_tool_item_set_tooltip - arg1 (tooltips)");
		validate_Rdaddress( arg2, "gtk_tool_item_set_tooltip - arg2 (tip_text)");
		validate_NULL_TYPETYPE(  arg2, "gtk_tool_item_set_tooltip - arg2 (tip_text)");
		validate_Rdaddress( arg3, "gtk_tool_item_set_tooltip - arg3 (tip_private)");
		validate_NULL_TYPETYPE(  arg3, "gtk_tool_item_set_tooltip - arg3 (tip_private)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}
