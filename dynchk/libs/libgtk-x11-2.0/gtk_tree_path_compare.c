// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_tree_path_compare
static gint(*funcptr) (const GtkTreePath * , const GtkTreePath * ) = 0;

extern int __lsb_check_params;
gint gtk_tree_path_compare (const GtkTreePath * arg0 , const GtkTreePath * arg1 )
{
	int reset_flag = __lsb_check_params;
	gint ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_tree_path_compare()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tree_path_compare");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tree_path_compare. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tree_path_compare() - validating");
		validate_Rdaddress( arg0, "gtk_tree_path_compare - arg0 (a)");
		validate_NULL_TYPETYPE(  arg0, "gtk_tree_path_compare - arg0 (a)");
		validate_Rdaddress( arg1, "gtk_tree_path_compare - arg1 (b)");
		validate_NULL_TYPETYPE(  arg1, "gtk_tree_path_compare - arg1 (b)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

