// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_table_set_row_spacings
static void(*funcptr) (GtkTable * , guint ) = 0;

extern int __lsb_check_params;
void gtk_table_set_row_spacings (GtkTable * arg0 , guint arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_table_set_row_spacings()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_table_set_row_spacings");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_table_set_row_spacings. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_table_set_row_spacings() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_table_set_row_spacings - arg0 (table)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_table_set_row_spacings - arg0 (table)");
		validate_NULL_TYPETYPE(  arg1, "gtk_table_set_row_spacings - arg1 (spacing)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

