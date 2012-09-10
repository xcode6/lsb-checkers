// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_tree_lookup_extended
static gboolean(*funcptr) (GTree * , gconstpointer , gpointer * , gpointer * ) = 0;

extern int __lsb_check_params;
gboolean g_tree_lookup_extended (GTree * arg0 , gconstpointer arg1 , gpointer * arg2 , gpointer * arg3 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_tree_lookup_extended()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_tree_lookup_extended");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_tree_lookup_extended. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_tree_lookup_extended() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_tree_lookup_extended - arg0 (tree)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_tree_lookup_extended - arg0 (tree)");
		validate_NULL_TYPETYPE(  arg1, "g_tree_lookup_extended - arg1 (lookup_key)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_tree_lookup_extended - arg2 (orig_key)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_tree_lookup_extended - arg2 (orig_key)");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_tree_lookup_extended - arg3 (value)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_tree_lookup_extended - arg3 (value)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

