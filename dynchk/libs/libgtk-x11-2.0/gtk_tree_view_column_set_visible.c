// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_tree_view_column_set_visible
static void(*funcptr) (GtkTreeViewColumn * , gboolean ) = 0;

extern int __lsb_check_params;
void gtk_tree_view_column_set_visible (GtkTreeViewColumn * arg0 , gboolean arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_tree_view_column_set_visible()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tree_view_column_set_visible");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tree_view_column_set_visible. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tree_view_column_set_visible() - validating");
		validate_RWaddress( arg0, "gtk_tree_view_column_set_visible - arg0 (tree_column)");
		validate_NULL_TYPETYPE(  arg0, "gtk_tree_view_column_set_visible - arg0 (tree_column)");
		validate_NULL_TYPETYPE(  arg1, "gtk_tree_view_column_set_visible - arg1 (visible)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

