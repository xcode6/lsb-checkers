// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <glib-2.0/glib-object.h>
#undef gtk_theming_engine_register_property
static void(*funcptr) (const char * , GtkStylePropertyParser , GParamSpec * ) = 0;

extern int __lsb_check_params;
void gtk_theming_engine_register_property (const char * arg0 , GtkStylePropertyParser arg1 , GParamSpec * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_theming_engine_register_property()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_theming_engine_register_property");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_theming_engine_register_property. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_theming_engine_register_property() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "gtk_theming_engine_register_property - arg0 (name_space)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_theming_engine_register_property - arg0 (name_space)");
		validate_NULL_TYPETYPE(  arg1, "gtk_theming_engine_register_property - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "gtk_theming_engine_register_property - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_theming_engine_register_property - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}
