// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_widget_get_default_direction
static GtkTextDirection(*funcptr) () = 0;

extern int __lsb_check_params;
GtkTextDirection gtk_widget_get_default_direction ()
{
	int reset_flag = __lsb_check_params;
	GtkTextDirection ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_widget_get_default_direction()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_widget_get_default_direction");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_widget_get_default_direction. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_widget_get_default_direction() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

