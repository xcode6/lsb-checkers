// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_table_attach_defaults
static void(*funcptr) (GtkTable * , GtkWidget * , guint , guint , guint , guint ) = 0;

extern int __lsb_check_params;
void gtk_table_attach_defaults (GtkTable * arg0 , GtkWidget * arg1 , guint arg2 , guint arg3 , guint arg4 , guint arg5 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_table_attach_defaults()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_table_attach_defaults");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_table_attach_defaults. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_table_attach_defaults() - validating");
		validate_RWaddress( arg0, "gtk_table_attach_defaults - arg0 (table)");
		validate_NULL_TYPETYPE(  arg0, "gtk_table_attach_defaults - arg0 (table)");
		validate_RWaddress( arg1, "gtk_table_attach_defaults - arg1 (widget)");
		validate_NULL_TYPETYPE(  arg1, "gtk_table_attach_defaults - arg1 (widget)");
		validate_NULL_TYPETYPE(  arg2, "gtk_table_attach_defaults - arg2 (left_attach)");
		validate_NULL_TYPETYPE(  arg3, "gtk_table_attach_defaults - arg3 (right_attach)");
		validate_NULL_TYPETYPE(  arg4, "gtk_table_attach_defaults - arg4 (top_attach)");
		validate_NULL_TYPETYPE(  arg5, "gtk_table_attach_defaults - arg5 (bottom_attach)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}

