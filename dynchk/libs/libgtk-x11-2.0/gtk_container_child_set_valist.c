// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#include <stdarg.h>
#undef gtk_container_child_set_valist
static void(*funcptr) (GtkContainer * , GtkWidget * , const gchar * , va_list ) = 0;

extern int __lsb_check_params;
void gtk_container_child_set_valist (GtkContainer * arg0 , GtkWidget * arg1 , const gchar * arg2 , va_list arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_container_child_set_valist()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_container_child_set_valist");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_container_child_set_valist. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_container_child_set_valist() - validating");
		validate_RWaddress( arg0, "gtk_container_child_set_valist - arg0 (container)");
		validate_NULL_TYPETYPE(  arg0, "gtk_container_child_set_valist - arg0 (container)");
		validate_RWaddress( arg1, "gtk_container_child_set_valist - arg1 (child)");
		validate_NULL_TYPETYPE(  arg1, "gtk_container_child_set_valist - arg1 (child)");
		validate_Rdaddress( arg2, "gtk_container_child_set_valist - arg2 (first_property_name)");
		validate_NULL_TYPETYPE(  arg2, "gtk_container_child_set_valist - arg2 (first_property_name)");
		validate_NULL_TYPETYPE(  arg3, "gtk_container_child_set_valist - arg3 (var_args)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}
