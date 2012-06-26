// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_fixed_get_has_window
static gboolean(*funcptr) (GtkFixed * ) = 0;

extern int __lsb_check_params;
gboolean gtk_fixed_get_has_window (GtkFixed * arg0 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_fixed_get_has_window()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_fixed_get_has_window");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_fixed_get_has_window. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_fixed_get_has_window() - validating");
		validate_RWaddress( arg0, "gtk_fixed_get_has_window - arg0 (fixed)");
		validate_NULL_TYPETYPE(  arg0, "gtk_fixed_get_has_window - arg0 (fixed)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

