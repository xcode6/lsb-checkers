// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_tree_model_get_iter_from_string
static gboolean(*funcptr) (GtkTreeModel * , GtkTreeIter * , const gchar * ) = 0;

extern int __lsb_check_params;
gboolean gtk_tree_model_get_iter_from_string (GtkTreeModel * arg0 , GtkTreeIter * arg1 , const gchar * arg2 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_tree_model_get_iter_from_string()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tree_model_get_iter_from_string");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tree_model_get_iter_from_string. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tree_model_get_iter_from_string() - validating");
		validate_RWaddress( arg0, "gtk_tree_model_get_iter_from_string - arg0 (tree_model)");
		validate_NULL_TYPETYPE(  arg0, "gtk_tree_model_get_iter_from_string - arg0 (tree_model)");
		validate_RWaddress( arg1, "gtk_tree_model_get_iter_from_string - arg1 (iter)");
		validate_NULL_TYPETYPE(  arg1, "gtk_tree_model_get_iter_from_string - arg1 (iter)");
		validate_Rdaddress( arg2, "gtk_tree_model_get_iter_from_string - arg2 (path_string)");
		validate_NULL_TYPETYPE(  arg2, "gtk_tree_model_get_iter_from_string - arg2 (path_string)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

