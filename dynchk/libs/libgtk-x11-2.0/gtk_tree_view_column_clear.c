// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_tree_view_column_clear
static void(*funcptr) (GtkTreeViewColumn * ) = 0;

extern int __lsb_check_params;
void gtk_tree_view_column_clear (GtkTreeViewColumn * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_tree_view_column_clear()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tree_view_column_clear");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tree_view_column_clear. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tree_view_column_clear() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_tree_view_column_clear - arg0 (tree_column)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_tree_view_column_clear - arg0 (tree_column)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

