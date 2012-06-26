// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_window_get_position
static void(*funcptr) (GtkWindow * , gint * , gint * ) = 0;

extern int __lsb_check_params;
void gtk_window_get_position (GtkWindow * arg0 , gint * arg1 , gint * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_window_get_position()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_window_get_position");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_window_get_position. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_window_get_position() - validating");
		validate_RWaddress( arg0, "gtk_window_get_position - arg0 (window)");
		validate_NULL_TYPETYPE(  arg0, "gtk_window_get_position - arg0 (window)");
		validate_RWaddress( arg1, "gtk_window_get_position - arg1 (root_x)");
		validate_NULL_TYPETYPE(  arg1, "gtk_window_get_position - arg1 (root_x)");
		validate_RWaddress( arg2, "gtk_window_get_position - arg2 (root_y)");
		validate_NULL_TYPETYPE(  arg2, "gtk_window_get_position - arg2 (root_y)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

