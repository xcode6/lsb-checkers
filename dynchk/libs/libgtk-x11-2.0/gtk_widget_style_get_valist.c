// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#include <stdarg.h>
#undef gtk_widget_style_get_valist
static void(*funcptr) (GtkWidget * , const gchar * , va_list ) = 0;

extern int __lsb_check_params;
void gtk_widget_style_get_valist (GtkWidget * arg0 , const gchar * arg1 , va_list arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_widget_style_get_valist()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_widget_style_get_valist");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_widget_style_get_valist. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_widget_style_get_valist() - validating");
		validate_RWaddress( arg0, "gtk_widget_style_get_valist - arg0 (widget)");
		validate_NULL_TYPETYPE(  arg0, "gtk_widget_style_get_valist - arg0 (widget)");
		validate_Rdaddress( arg1, "gtk_widget_style_get_valist - arg1 (first_property_name)");
		validate_NULL_TYPETYPE(  arg1, "gtk_widget_style_get_valist - arg1 (first_property_name)");
		validate_NULL_TYPETYPE(  arg2, "gtk_widget_style_get_valist - arg2 (var_args)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

