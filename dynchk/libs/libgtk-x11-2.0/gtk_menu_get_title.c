// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_menu_get_title
static const gchar *(*funcptr) (GtkMenu * ) = 0;

extern int __lsb_check_params;
const gchar * gtk_menu_get_title (GtkMenu * arg0 )
{
	int reset_flag = __lsb_check_params;
	const gchar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_menu_get_title()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_menu_get_title");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_menu_get_title. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_menu_get_title() - validating");
		validate_RWaddress( arg0, "gtk_menu_get_title - arg0 (menu)");
		validate_NULL_TYPETYPE(  arg0, "gtk_menu_get_title - arg0 (menu)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

