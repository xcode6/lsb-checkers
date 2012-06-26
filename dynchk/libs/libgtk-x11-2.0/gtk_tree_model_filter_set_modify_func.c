// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#undef gtk_tree_model_filter_set_modify_func
static void(*funcptr) (GtkTreeModelFilter * , gint , GType * , GtkTreeModelFilterModifyFunc , gpointer , GtkDestroyNotify ) = 0;

extern int __lsb_check_params;
void gtk_tree_model_filter_set_modify_func (GtkTreeModelFilter * arg0 , gint arg1 , GType * arg2 , GtkTreeModelFilterModifyFunc arg3 , gpointer arg4 , GtkDestroyNotify arg5 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_tree_model_filter_set_modify_func()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tree_model_filter_set_modify_func");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tree_model_filter_set_modify_func. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tree_model_filter_set_modify_func() - validating");
		validate_RWaddress( arg0, "gtk_tree_model_filter_set_modify_func - arg0 (filter)");
		validate_NULL_TYPETYPE(  arg0, "gtk_tree_model_filter_set_modify_func - arg0 (filter)");
		validate_NULL_TYPETYPE(  arg1, "gtk_tree_model_filter_set_modify_func - arg1 (n_columns)");
		validate_RWaddress( arg2, "gtk_tree_model_filter_set_modify_func - arg2 (types)");
		validate_NULL_TYPETYPE(  arg2, "gtk_tree_model_filter_set_modify_func - arg2 (types)");
		validate_NULL_TYPETYPE(  arg3, "gtk_tree_model_filter_set_modify_func - arg3 (func)");
		validate_NULL_TYPETYPE(  arg4, "gtk_tree_model_filter_set_modify_func - arg4 (data)");
		validate_NULL_TYPETYPE(  arg5, "gtk_tree_model_filter_set_modify_func - arg5 (destroy)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}

