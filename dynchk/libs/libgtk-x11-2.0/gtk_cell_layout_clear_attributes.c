// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_cell_layout_clear_attributes
static void(*funcptr) (GtkCellLayout * , GtkCellRenderer * ) = 0;

extern int __lsb_check_params;
void gtk_cell_layout_clear_attributes (GtkCellLayout * arg0 , GtkCellRenderer * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_cell_layout_clear_attributes()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_cell_layout_clear_attributes");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_cell_layout_clear_attributes. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_cell_layout_clear_attributes() - validating");
		validate_RWaddress( arg0, "gtk_cell_layout_clear_attributes - arg0 (cell_layout)");
		validate_NULL_TYPETYPE(  arg0, "gtk_cell_layout_clear_attributes - arg0 (cell_layout)");
		validate_RWaddress( arg1, "gtk_cell_layout_clear_attributes - arg1 (cell)");
		validate_NULL_TYPETYPE(  arg1, "gtk_cell_layout_clear_attributes - arg1 (cell)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

