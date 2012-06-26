// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_tree_selection_get_mode
static GtkSelectionMode(*funcptr) (GtkTreeSelection * ) = 0;

extern int __lsb_check_params;
GtkSelectionMode gtk_tree_selection_get_mode (GtkTreeSelection * arg0 )
{
	int reset_flag = __lsb_check_params;
	GtkSelectionMode ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_tree_selection_get_mode()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tree_selection_get_mode");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tree_selection_get_mode. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tree_selection_get_mode() - validating");
		validate_RWaddress( arg0, "gtk_tree_selection_get_mode - arg0 (selection)");
		validate_NULL_TYPETYPE(  arg0, "gtk_tree_selection_get_mode - arg0 (selection)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

