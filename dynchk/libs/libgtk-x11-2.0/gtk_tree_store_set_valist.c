// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <stdarg.h>
#undef gtk_tree_store_set_valist
static void(*funcptr) (GtkTreeStore * , GtkTreeIter * , va_list ) = 0;

extern int __lsb_check_params;
void gtk_tree_store_set_valist (GtkTreeStore * arg0 , GtkTreeIter * arg1 , va_list arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_tree_store_set_valist()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tree_store_set_valist");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tree_store_set_valist. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tree_store_set_valist() - validating");
		validate_RWaddress( arg0, "gtk_tree_store_set_valist - arg0 (tree_store)");
		validate_NULL_TYPETYPE(  arg0, "gtk_tree_store_set_valist - arg0 (tree_store)");
		validate_RWaddress( arg1, "gtk_tree_store_set_valist - arg1 (iter)");
		validate_NULL_TYPETYPE(  arg1, "gtk_tree_store_set_valist - arg1 (iter)");
		validate_NULL_TYPETYPE(  arg2, "gtk_tree_store_set_valist - arg2 (var_args)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

