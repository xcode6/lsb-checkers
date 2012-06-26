// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_color_button_new_with_color
static GtkWidget *(*funcptr) (const GdkColor * ) = 0;

extern int __lsb_check_params;
GtkWidget * gtk_color_button_new_with_color (const GdkColor * arg0 )
{
	int reset_flag = __lsb_check_params;
	GtkWidget * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_color_button_new_with_color()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_color_button_new_with_color");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_color_button_new_with_color. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_color_button_new_with_color() - validating");
		validate_Rdaddress( arg0, "gtk_color_button_new_with_color - arg0 (color)");
		validate_NULL_TYPETYPE(  arg0, "gtk_color_button_new_with_color - arg0 (color)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

