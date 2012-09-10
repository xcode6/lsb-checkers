// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_tool_item_get_relief_style
static GtkReliefStyle(*funcptr) (GtkToolItem * ) = 0;

extern int __lsb_check_params;
GtkReliefStyle gtk_tool_item_get_relief_style (GtkToolItem * arg0 )
{
	int reset_flag = __lsb_check_params;
	GtkReliefStyle ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_tool_item_get_relief_style()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tool_item_get_relief_style");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tool_item_get_relief_style. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tool_item_get_relief_style() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_tool_item_get_relief_style - arg0 (tool_item)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_tool_item_get_relief_style - arg0 (tool_item)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

