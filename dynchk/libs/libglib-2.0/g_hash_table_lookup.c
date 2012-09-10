// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_hash_table_lookup
static gpointer(*funcptr) (GHashTable * , gconstpointer ) = 0;

extern int __lsb_check_params;
gpointer g_hash_table_lookup (GHashTable * arg0 , gconstpointer arg1 )
{
	int reset_flag = __lsb_check_params;
	gpointer ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_hash_table_lookup()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_hash_table_lookup");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_hash_table_lookup. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_hash_table_lookup() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_hash_table_lookup - arg0 (hash_table)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_hash_table_lookup - arg0 (hash_table)");
		validate_NULL_TYPETYPE(  arg1, "g_hash_table_lookup - arg1 (key)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

