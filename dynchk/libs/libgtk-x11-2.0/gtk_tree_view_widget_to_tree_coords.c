// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_tree_view_widget_to_tree_coords
static void(*funcptr) (GtkTreeView * , gint , gint , gint * , gint * ) = 0;

extern int __lsb_check_params;
void gtk_tree_view_widget_to_tree_coords (GtkTreeView * arg0 , gint arg1 , gint arg2 , gint * arg3 , gint * arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_tree_view_widget_to_tree_coords()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tree_view_widget_to_tree_coords");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tree_view_widget_to_tree_coords. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tree_view_widget_to_tree_coords() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_tree_view_widget_to_tree_coords - arg0 (tree_view)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_tree_view_widget_to_tree_coords - arg0 (tree_view)");
		validate_NULL_TYPETYPE(  arg1, "gtk_tree_view_widget_to_tree_coords - arg1 (wx)");
		validate_NULL_TYPETYPE(  arg2, "gtk_tree_view_widget_to_tree_coords - arg2 (wy)");
		if( arg3 ) {
		validate_RWaddress( arg3, "gtk_tree_view_widget_to_tree_coords - arg3 (tx)");
		}
		validate_NULL_TYPETYPE(  arg3, "gtk_tree_view_widget_to_tree_coords - arg3 (tx)");
		if( arg4 ) {
		validate_RWaddress( arg4, "gtk_tree_view_widget_to_tree_coords - arg4 (ty)");
		}
		validate_NULL_TYPETYPE(  arg4, "gtk_tree_view_widget_to_tree_coords - arg4 (ty)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

