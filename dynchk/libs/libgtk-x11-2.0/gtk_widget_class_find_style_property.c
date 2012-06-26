// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_widget_class_find_style_property
static GParamSpec *(*funcptr) (GtkWidgetClass * , const gchar * ) = 0;

extern int __lsb_check_params;
GParamSpec * gtk_widget_class_find_style_property (GtkWidgetClass * arg0 , const gchar * arg1 )
{
	int reset_flag = __lsb_check_params;
	GParamSpec * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_widget_class_find_style_property()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_widget_class_find_style_property");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_widget_class_find_style_property. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_widget_class_find_style_property() - validating");
		validate_RWaddress( arg0, "gtk_widget_class_find_style_property - arg0 (klass)");
		validate_NULL_TYPETYPE(  arg0, "gtk_widget_class_find_style_property - arg0 (klass)");
		validate_Rdaddress( arg1, "gtk_widget_class_find_style_property - arg1 (property_name)");
		validate_NULL_TYPETYPE(  arg1, "gtk_widget_class_find_style_property - arg1 (property_name)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

