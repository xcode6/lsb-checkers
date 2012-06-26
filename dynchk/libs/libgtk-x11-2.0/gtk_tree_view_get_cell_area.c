// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <gtk-2.0/gdk/gdk.h>
#undef gtk_tree_view_get_cell_area
static void(*funcptr) (GtkTreeView * , GtkTreePath * , GtkTreeViewColumn * , GdkRectangle * ) = 0;

extern int __lsb_check_params;
void gtk_tree_view_get_cell_area (GtkTreeView * arg0 , GtkTreePath * arg1 , GtkTreeViewColumn * arg2 , GdkRectangle * arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_tree_view_get_cell_area()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tree_view_get_cell_area");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tree_view_get_cell_area. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tree_view_get_cell_area() - validating");
		validate_RWaddress( arg0, "gtk_tree_view_get_cell_area - arg0 (tree_view)");
		validate_NULL_TYPETYPE(  arg0, "gtk_tree_view_get_cell_area - arg0 (tree_view)");
		validate_RWaddress( arg1, "gtk_tree_view_get_cell_area - arg1 (path)");
		validate_NULL_TYPETYPE(  arg1, "gtk_tree_view_get_cell_area - arg1 (path)");
		validate_RWaddress( arg2, "gtk_tree_view_get_cell_area - arg2 (column)");
		validate_NULL_TYPETYPE(  arg2, "gtk_tree_view_get_cell_area - arg2 (column)");
		validate_RWaddress( arg3, "gtk_tree_view_get_cell_area - arg3 (rect)");
		validate_NULL_TYPETYPE(  arg3, "gtk_tree_view_get_cell_area - arg3 (rect)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

