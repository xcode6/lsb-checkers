// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_tree_drag_dest_drag_data_received
static gboolean(*funcptr) (GtkTreeDragDest * , GtkTreePath * , GtkSelectionData * ) = 0;

extern int __lsb_check_params;
gboolean gtk_tree_drag_dest_drag_data_received (GtkTreeDragDest * arg0 , GtkTreePath * arg1 , GtkSelectionData * arg2 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_tree_drag_dest_drag_data_received()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tree_drag_dest_drag_data_received");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tree_drag_dest_drag_data_received. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tree_drag_dest_drag_data_received() - validating");
		validate_RWaddress( arg0, "gtk_tree_drag_dest_drag_data_received - arg0 (drag_dest)");
		validate_NULL_TYPETYPE(  arg0, "gtk_tree_drag_dest_drag_data_received - arg0 (drag_dest)");
		validate_RWaddress( arg1, "gtk_tree_drag_dest_drag_data_received - arg1 (dest)");
		validate_NULL_TYPETYPE(  arg1, "gtk_tree_drag_dest_drag_data_received - arg1 (dest)");
		validate_RWaddress( arg2, "gtk_tree_drag_dest_drag_data_received - arg2 (selection_data)");
		validate_NULL_TYPETYPE(  arg2, "gtk_tree_drag_dest_drag_data_received - arg2 (selection_data)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
