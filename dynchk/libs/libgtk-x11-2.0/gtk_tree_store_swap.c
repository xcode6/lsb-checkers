// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_tree_store_swap
static void(*funcptr) (GtkTreeStore * , GtkTreeIter * , GtkTreeIter * ) = 0;

extern int __lsb_check_params;
void gtk_tree_store_swap (GtkTreeStore * arg0 , GtkTreeIter * arg1 , GtkTreeIter * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_tree_store_swap()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tree_store_swap");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tree_store_swap. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tree_store_swap() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_tree_store_swap - arg0 (tree_store)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_tree_store_swap - arg0 (tree_store)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_tree_store_swap - arg1 (a)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_tree_store_swap - arg1 (a)");
		if( arg2 ) {
		validate_RWaddress( arg2, "gtk_tree_store_swap - arg2 (b)");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_tree_store_swap - arg2 (b)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

