// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_hash_table_replace
static void(*funcptr) (GHashTable * , gpointer , gpointer ) = 0;

extern int __lsb_check_params;
void g_hash_table_replace (GHashTable * arg0 , gpointer arg1 , gpointer arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_hash_table_replace()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_hash_table_replace");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_hash_table_replace. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_hash_table_replace() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_hash_table_replace - arg0 (hash_table)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_hash_table_replace - arg0 (hash_table)");
		validate_NULL_TYPETYPE(  arg1, "g_hash_table_replace - arg1 (key)");
		validate_NULL_TYPETYPE(  arg2, "g_hash_table_replace - arg2 (value)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

