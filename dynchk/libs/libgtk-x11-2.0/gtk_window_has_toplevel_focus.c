// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_window_has_toplevel_focus
static gboolean(*funcptr) (GtkWindow * ) = 0;

extern int __lsb_check_params;
gboolean gtk_window_has_toplevel_focus (GtkWindow * arg0 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_window_has_toplevel_focus()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_window_has_toplevel_focus");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_window_has_toplevel_focus. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_window_has_toplevel_focus() - validating");
		validate_RWaddress( arg0, "gtk_window_has_toplevel_focus - arg0 (window)");
		validate_NULL_TYPETYPE(  arg0, "gtk_window_has_toplevel_focus - arg0 (window)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

