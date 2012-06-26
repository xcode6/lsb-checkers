// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_menu_get_tearoff_state
static gboolean(*funcptr) (GtkMenu * ) = 0;

extern int __lsb_check_params;
gboolean gtk_menu_get_tearoff_state (GtkMenu * arg0 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_menu_get_tearoff_state()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_menu_get_tearoff_state");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_menu_get_tearoff_state. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_menu_get_tearoff_state() - validating");
		validate_RWaddress( arg0, "gtk_menu_get_tearoff_state - arg0 (menu)");
		validate_NULL_TYPETYPE(  arg0, "gtk_menu_get_tearoff_state - arg0 (menu)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

