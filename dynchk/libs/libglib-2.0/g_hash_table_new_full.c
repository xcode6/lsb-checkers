// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_hash_table_new_full
static GHashTable *(*funcptr) (GHashFunc , GEqualFunc , GDestroyNotify , GDestroyNotify ) = 0;

extern int __lsb_check_params;
GHashTable * g_hash_table_new_full (GHashFunc arg0 , GEqualFunc arg1 , GDestroyNotify arg2 , GDestroyNotify arg3 )
{
	int reset_flag = __lsb_check_params;
	GHashTable * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_hash_table_new_full()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_hash_table_new_full");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_hash_table_new_full. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_hash_table_new_full() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_hash_table_new_full - arg0 (hash_func)");
		validate_NULL_TYPETYPE(  arg1, "g_hash_table_new_full - arg1 (key_equal_func)");
		validate_NULL_TYPETYPE(  arg2, "g_hash_table_new_full - arg2 (key_destroy_func)");
		validate_NULL_TYPETYPE(  arg3, "g_hash_table_new_full - arg3 (value_destroy_func)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

