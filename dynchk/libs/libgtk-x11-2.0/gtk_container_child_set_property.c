// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#undef gtk_container_child_set_property
static void(*funcptr) (GtkContainer * , GtkWidget * , const gchar * , const GValue * ) = 0;

extern int __lsb_check_params;
void gtk_container_child_set_property (GtkContainer * arg0 , GtkWidget * arg1 , const gchar * arg2 , const GValue * arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_container_child_set_property()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_container_child_set_property");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_container_child_set_property. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_container_child_set_property() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_container_child_set_property - arg0 (container)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_container_child_set_property - arg0 (container)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_container_child_set_property - arg1 (child)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_container_child_set_property - arg1 (child)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "gtk_container_child_set_property - arg2 (property_name)");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_container_child_set_property - arg2 (property_name)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "gtk_container_child_set_property - arg3 (value)");
		}
		validate_NULL_TYPETYPE(  arg3, "gtk_container_child_set_property - arg3 (value)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

