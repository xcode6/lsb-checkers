// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_widget_set_composite_name
static void(*funcptr) (GtkWidget * , const gchar * ) = 0;

extern int __lsb_check_params;
void gtk_widget_set_composite_name (GtkWidget * arg0 , const gchar * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_widget_set_composite_name()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_widget_set_composite_name");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_widget_set_composite_name. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_widget_set_composite_name() - validating");
		validate_RWaddress( arg0, "gtk_widget_set_composite_name - arg0 (widget)");
		validate_NULL_TYPETYPE(  arg0, "gtk_widget_set_composite_name - arg0 (widget)");
		validate_Rdaddress( arg1, "gtk_widget_set_composite_name - arg1 (name)");
		validate_NULL_TYPETYPE(  arg1, "gtk_widget_set_composite_name - arg1 (name)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

