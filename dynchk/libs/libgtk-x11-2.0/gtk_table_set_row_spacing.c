// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_table_set_row_spacing
static void(*funcptr) (GtkTable * , guint , guint ) = 0;

extern int __lsb_check_params;
void gtk_table_set_row_spacing (GtkTable * arg0 , guint arg1 , guint arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_table_set_row_spacing()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_table_set_row_spacing");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_table_set_row_spacing. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_table_set_row_spacing() - validating");
		validate_RWaddress( arg0, "gtk_table_set_row_spacing - arg0 (table)");
		validate_NULL_TYPETYPE(  arg0, "gtk_table_set_row_spacing - arg0 (table)");
		validate_NULL_TYPETYPE(  arg1, "gtk_table_set_row_spacing - arg1 (row)");
		validate_NULL_TYPETYPE(  arg2, "gtk_table_set_row_spacing - arg2 (spacing)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

