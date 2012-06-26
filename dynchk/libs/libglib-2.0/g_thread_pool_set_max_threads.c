// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_thread_pool_set_max_threads
static void(*funcptr) (GThreadPool * , gint , GError * * ) = 0;

extern int __lsb_check_params;
void g_thread_pool_set_max_threads (GThreadPool * arg0 , gint arg1 , GError * * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_thread_pool_set_max_threads()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_thread_pool_set_max_threads");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_thread_pool_set_max_threads. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_thread_pool_set_max_threads() - validating");
		validate_RWaddress( arg0, "g_thread_pool_set_max_threads - arg0 (pool)");
		validate_NULL_TYPETYPE(  arg0, "g_thread_pool_set_max_threads - arg0 (pool)");
		validate_NULL_TYPETYPE(  arg1, "g_thread_pool_set_max_threads - arg1 (max_threads)");
		validate_RWaddress( arg2, "g_thread_pool_set_max_threads - arg2 (error)");
		validate_NULL_TYPETYPE(  arg2, "g_thread_pool_set_max_threads - arg2 (error)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

