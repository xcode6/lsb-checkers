// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_async_queue_lock
static void(*funcptr) (GAsyncQueue * ) = 0;

extern int __lsb_check_params;
void g_async_queue_lock (GAsyncQueue * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_async_queue_lock()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_async_queue_lock");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_async_queue_lock. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_async_queue_lock() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_async_queue_lock - arg0 (queue)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_async_queue_lock - arg0 (queue)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

