// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_tree_row_reference_copy
static GtkTreeRowReference *(*funcptr) (GtkTreeRowReference * ) = 0;

extern int __lsb_check_params;
GtkTreeRowReference * gtk_tree_row_reference_copy (GtkTreeRowReference * arg0 )
{
	int reset_flag = __lsb_check_params;
	GtkTreeRowReference * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_tree_row_reference_copy()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tree_row_reference_copy");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tree_row_reference_copy. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tree_row_reference_copy() - validating");
		validate_RWaddress( arg0, "gtk_tree_row_reference_copy - arg0 (reference)");
		validate_NULL_TYPETYPE(  arg0, "gtk_tree_row_reference_copy - arg0 (reference)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
