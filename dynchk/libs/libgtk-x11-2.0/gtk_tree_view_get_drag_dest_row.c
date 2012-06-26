// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_tree_view_get_drag_dest_row
static void(*funcptr) (GtkTreeView * , GtkTreePath * * , GtkTreeViewDropPosition * ) = 0;

extern int __lsb_check_params;
void gtk_tree_view_get_drag_dest_row (GtkTreeView * arg0 , GtkTreePath * * arg1 , GtkTreeViewDropPosition * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_tree_view_get_drag_dest_row()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tree_view_get_drag_dest_row");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tree_view_get_drag_dest_row. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tree_view_get_drag_dest_row() - validating");
		validate_RWaddress( arg0, "gtk_tree_view_get_drag_dest_row - arg0 (tree_view)");
		validate_NULL_TYPETYPE(  arg0, "gtk_tree_view_get_drag_dest_row - arg0 (tree_view)");
		validate_RWaddress( arg1, "gtk_tree_view_get_drag_dest_row - arg1 (path)");
		validate_NULL_TYPETYPE(  arg1, "gtk_tree_view_get_drag_dest_row - arg1 (path)");
		validate_RWaddress( arg2, "gtk_tree_view_get_drag_dest_row - arg2 (pos)");
		validate_NULL_TYPETYPE(  arg2, "gtk_tree_view_get_drag_dest_row - arg2 (pos)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

