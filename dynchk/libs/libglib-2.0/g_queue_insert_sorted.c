// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_queue_insert_sorted
static void(*funcptr) (GQueue * , gpointer , GCompareDataFunc , gpointer ) = 0;

extern int __lsb_check_params;
void g_queue_insert_sorted (GQueue * arg0 , gpointer arg1 , GCompareDataFunc arg2 , gpointer arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_queue_insert_sorted()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_queue_insert_sorted");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_queue_insert_sorted. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_queue_insert_sorted() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_queue_insert_sorted - arg0 (queue)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_queue_insert_sorted - arg0 (queue)");
		validate_NULL_TYPETYPE(  arg1, "g_queue_insert_sorted - arg1 (data)");
		validate_NULL_TYPETYPE(  arg2, "g_queue_insert_sorted - arg2 (func)");
		validate_NULL_TYPETYPE(  arg3, "g_queue_insert_sorted - arg3 (user_data)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

