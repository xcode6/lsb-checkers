// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_tree_selection_select_range
static void(*funcptr) (GtkTreeSelection * , GtkTreePath * , GtkTreePath * ) = 0;

extern int __lsb_check_params;
void gtk_tree_selection_select_range (GtkTreeSelection * arg0 , GtkTreePath * arg1 , GtkTreePath * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_tree_selection_select_range()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tree_selection_select_range");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tree_selection_select_range. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tree_selection_select_range() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_tree_selection_select_range - arg0 (selection)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_tree_selection_select_range - arg0 (selection)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_tree_selection_select_range - arg1 (start_path)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_tree_selection_select_range - arg1 (start_path)");
		if( arg2 ) {
		validate_RWaddress( arg2, "gtk_tree_selection_select_range - arg2 (end_path)");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_tree_selection_select_range - arg2 (end_path)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

