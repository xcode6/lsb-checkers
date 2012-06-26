// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib-object.h>
#undef gtk_widget_class_install_style_property
static void(*funcptr) (GtkWidgetClass * , GParamSpec * ) = 0;

extern int __lsb_check_params;
void gtk_widget_class_install_style_property (GtkWidgetClass * arg0 , GParamSpec * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_widget_class_install_style_property()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_widget_class_install_style_property");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_widget_class_install_style_property. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_widget_class_install_style_property() - validating");
		validate_RWaddress( arg0, "gtk_widget_class_install_style_property - arg0 (klass)");
		validate_NULL_TYPETYPE(  arg0, "gtk_widget_class_install_style_property - arg0 (klass)");
		validate_RWaddress( arg1, "gtk_widget_class_install_style_property - arg1 (pspec)");
		validate_NULL_TYPETYPE(  arg1, "gtk_widget_class_install_style_property - arg1 (pspec)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

