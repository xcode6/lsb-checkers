// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_tree_model_filter_clear_cache
static void(*funcptr) (GtkTreeModelFilter * ) = 0;

extern int __lsb_check_params;
void gtk_tree_model_filter_clear_cache (GtkTreeModelFilter * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_tree_model_filter_clear_cache()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tree_model_filter_clear_cache");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tree_model_filter_clear_cache. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tree_model_filter_clear_cache() - validating");
		validate_RWaddress( arg0, "gtk_tree_model_filter_clear_cache - arg0 (filter)");
		validate_NULL_TYPETYPE(  arg0, "gtk_tree_model_filter_clear_cache - arg0 (filter)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

