// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_tree_view_set_row_separator_func
static void(*funcptr) (GtkTreeView * , GtkTreeViewRowSeparatorFunc , gpointer , GtkDestroyNotify ) = 0;

extern int __lsb_check_params;
void gtk_tree_view_set_row_separator_func (GtkTreeView * arg0 , GtkTreeViewRowSeparatorFunc arg1 , gpointer arg2 , GtkDestroyNotify arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_tree_view_set_row_separator_func()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tree_view_set_row_separator_func");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tree_view_set_row_separator_func. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tree_view_set_row_separator_func() - validating");
		validate_RWaddress( arg0, "gtk_tree_view_set_row_separator_func - arg0 (tree_view)");
		validate_NULL_TYPETYPE(  arg0, "gtk_tree_view_set_row_separator_func - arg0 (tree_view)");
		validate_NULL_TYPETYPE(  arg1, "gtk_tree_view_set_row_separator_func - arg1 (func)");
		validate_NULL_TYPETYPE(  arg2, "gtk_tree_view_set_row_separator_func - arg2 (data)");
		validate_NULL_TYPETYPE(  arg3, "gtk_tree_view_set_row_separator_func - arg3 (destroy)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

