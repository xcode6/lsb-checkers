// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_tree_selection_selected_foreach
static void(*funcptr) (GtkTreeSelection * , GtkTreeSelectionForeachFunc , gpointer ) = 0;

extern int __lsb_check_params;
void gtk_tree_selection_selected_foreach (GtkTreeSelection * arg0 , GtkTreeSelectionForeachFunc arg1 , gpointer arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_tree_selection_selected_foreach()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tree_selection_selected_foreach");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tree_selection_selected_foreach. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tree_selection_selected_foreach() - validating");
		validate_RWaddress( arg0, "gtk_tree_selection_selected_foreach - arg0 (selection)");
		validate_NULL_TYPETYPE(  arg0, "gtk_tree_selection_selected_foreach - arg0 (selection)");
		validate_NULL_TYPETYPE(  arg1, "gtk_tree_selection_selected_foreach - arg1 (func)");
		validate_NULL_TYPETYPE(  arg2, "gtk_tree_selection_selected_foreach - arg2 (data)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

