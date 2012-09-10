// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_tree_model_filter_convert_child_iter_to_iter
static gboolean(*funcptr) (GtkTreeModelFilter * , GtkTreeIter * , GtkTreeIter * ) = 0;

extern int __lsb_check_params;
gboolean gtk_tree_model_filter_convert_child_iter_to_iter (GtkTreeModelFilter * arg0 , GtkTreeIter * arg1 , GtkTreeIter * arg2 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_tree_model_filter_convert_child_iter_to_iter()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tree_model_filter_convert_child_iter_to_iter");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tree_model_filter_convert_child_iter_to_iter. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tree_model_filter_convert_child_iter_to_iter() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_tree_model_filter_convert_child_iter_to_iter - arg0 (filter)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_tree_model_filter_convert_child_iter_to_iter - arg0 (filter)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_tree_model_filter_convert_child_iter_to_iter - arg1 (filter_iter)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_tree_model_filter_convert_child_iter_to_iter - arg1 (filter_iter)");
		if( arg2 ) {
		validate_RWaddress( arg2, "gtk_tree_model_filter_convert_child_iter_to_iter - arg2 (child_iter)");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_tree_model_filter_convert_child_iter_to_iter - arg2 (child_iter)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

