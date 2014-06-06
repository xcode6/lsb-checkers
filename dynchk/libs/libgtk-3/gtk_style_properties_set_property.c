// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <glib-2.0/glib-object.h>
#undef gtk_style_properties_set_property
static void(*funcptr) (GtkStyleProperties * , const char * , GtkStateFlags , const GValue * ) = 0;

extern int __lsb_check_params;
void gtk_style_properties_set_property (GtkStyleProperties * arg0 , const char * arg1 , GtkStateFlags arg2 , const GValue * arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_style_properties_set_property()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_style_properties_set_property");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_style_properties_set_property. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_style_properties_set_property() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_style_properties_set_property - arg0 (props)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_style_properties_set_property - arg0 (props)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_style_properties_set_property - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_style_properties_set_property - arg1");
		validate_NULL_TYPETYPE(  arg2, "gtk_style_properties_set_property - arg2");
		if( arg3 ) {
		validate_Rdaddress( arg3, "gtk_style_properties_set_property - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "gtk_style_properties_set_property - arg3");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

