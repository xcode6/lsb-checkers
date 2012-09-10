// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_tree_view_column_set_cell_data_func
static void(*funcptr) (GtkTreeViewColumn * , GtkCellRenderer * , GtkTreeCellDataFunc , gpointer , GtkDestroyNotify ) = 0;

extern int __lsb_check_params;
void gtk_tree_view_column_set_cell_data_func (GtkTreeViewColumn * arg0 , GtkCellRenderer * arg1 , GtkTreeCellDataFunc arg2 , gpointer arg3 , GtkDestroyNotify arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_tree_view_column_set_cell_data_func()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tree_view_column_set_cell_data_func");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tree_view_column_set_cell_data_func. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tree_view_column_set_cell_data_func() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_tree_view_column_set_cell_data_func - arg0 (tree_column)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_tree_view_column_set_cell_data_func - arg0 (tree_column)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_tree_view_column_set_cell_data_func - arg1 (cell_renderer)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_tree_view_column_set_cell_data_func - arg1 (cell_renderer)");
		validate_NULL_TYPETYPE(  arg2, "gtk_tree_view_column_set_cell_data_func - arg2 (func)");
		validate_NULL_TYPETYPE(  arg3, "gtk_tree_view_column_set_cell_data_func - arg3 (func_data)");
		validate_NULL_TYPETYPE(  arg4, "gtk_tree_view_column_set_cell_data_func - arg4 (destroy)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

