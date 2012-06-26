// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_tree_model_iter_next
static gboolean(*funcptr) (GtkTreeModel * , GtkTreeIter * ) = 0;

extern int __lsb_check_params;
gboolean gtk_tree_model_iter_next (GtkTreeModel * arg0 , GtkTreeIter * arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_tree_model_iter_next()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tree_model_iter_next");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tree_model_iter_next. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tree_model_iter_next() - validating");
		validate_RWaddress( arg0, "gtk_tree_model_iter_next - arg0 (tree_model)");
		validate_NULL_TYPETYPE(  arg0, "gtk_tree_model_iter_next - arg0 (tree_model)");
		validate_RWaddress( arg1, "gtk_tree_model_iter_next - arg1 (iter)");
		validate_NULL_TYPETYPE(  arg1, "gtk_tree_model_iter_next - arg1 (iter)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

