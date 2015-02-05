// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_builder_add_from_string
static guint(*funcptr) (GtkBuilder * , const char * , gsize , GError * * ) = 0;

extern int __lsb_check_params;
guint gtk_builder_add_from_string (GtkBuilder * arg0 , const char * arg1 , gsize arg2 , GError * * arg3 )
{
	int reset_flag = __lsb_check_params;
	guint ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_builder_add_from_string()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_builder_add_from_string");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_builder_add_from_string. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_builder_add_from_string() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_builder_add_from_string - arg0 (builder)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_builder_add_from_string - arg0 (builder)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_builder_add_from_string - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_builder_add_from_string - arg1");
		validate_NULL_TYPETYPE(  arg2, "gtk_builder_add_from_string - arg2");
		if( arg3 ) {
		validate_RWaddress( arg3, "gtk_builder_add_from_string - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "gtk_builder_add_from_string - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}
