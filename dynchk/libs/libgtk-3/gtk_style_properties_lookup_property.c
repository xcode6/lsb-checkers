// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <glib-2.0/glib-object.h>
#undef gtk_style_properties_lookup_property
static gboolean(*funcptr) (const char * , GtkStylePropertyParser * , GParamSpec * * ) = 0;

extern int __lsb_check_params;
gboolean gtk_style_properties_lookup_property (const char * arg0 , GtkStylePropertyParser * arg1 , GParamSpec * * arg2 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_style_properties_lookup_property()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_style_properties_lookup_property");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_style_properties_lookup_property. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_style_properties_lookup_property() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "gtk_style_properties_lookup_property - arg0 (property_name)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_style_properties_lookup_property - arg0 (property_name)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_style_properties_lookup_property - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_style_properties_lookup_property - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "gtk_style_properties_lookup_property - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_style_properties_lookup_property - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
