// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_tree_row_reference_new_proxy
static GtkTreeRowReference *(*funcptr) (GObject * , GtkTreeModel * , GtkTreePath * ) = 0;

extern int __lsb_check_params;
GtkTreeRowReference * gtk_tree_row_reference_new_proxy (GObject * arg0 , GtkTreeModel * arg1 , GtkTreePath * arg2 )
{
	int reset_flag = __lsb_check_params;
	GtkTreeRowReference * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_tree_row_reference_new_proxy()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tree_row_reference_new_proxy");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tree_row_reference_new_proxy. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tree_row_reference_new_proxy() - validating");
		validate_RWaddress( arg0, "gtk_tree_row_reference_new_proxy - arg0 (proxy)");
		validate_NULL_TYPETYPE(  arg0, "gtk_tree_row_reference_new_proxy - arg0 (proxy)");
		validate_RWaddress( arg1, "gtk_tree_row_reference_new_proxy - arg1 (model)");
		validate_NULL_TYPETYPE(  arg1, "gtk_tree_row_reference_new_proxy - arg1 (model)");
		validate_RWaddress( arg2, "gtk_tree_row_reference_new_proxy - arg2 (path)");
		validate_NULL_TYPETYPE(  arg2, "gtk_tree_row_reference_new_proxy - arg2 (path)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
