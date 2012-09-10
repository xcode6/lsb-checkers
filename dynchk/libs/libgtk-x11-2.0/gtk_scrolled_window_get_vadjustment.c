// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_scrolled_window_get_vadjustment
static GtkAdjustment *(*funcptr) (GtkScrolledWindow * ) = 0;

extern int __lsb_check_params;
GtkAdjustment * gtk_scrolled_window_get_vadjustment (GtkScrolledWindow * arg0 )
{
	int reset_flag = __lsb_check_params;
	GtkAdjustment * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_scrolled_window_get_vadjustment()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_scrolled_window_get_vadjustment");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_scrolled_window_get_vadjustment. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_scrolled_window_get_vadjustment() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_scrolled_window_get_vadjustment - arg0 (scrolled_window)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_scrolled_window_get_vadjustment - arg0 (scrolled_window)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

