// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_async_queue_timed_pop
static gpointer(*funcptr) (GAsyncQueue * , GTimeVal * ) = 0;

extern int __lsb_check_params;
gpointer g_async_queue_timed_pop (GAsyncQueue * arg0 , GTimeVal * arg1 )
{
	int reset_flag = __lsb_check_params;
	gpointer ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_async_queue_timed_pop()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_async_queue_timed_pop");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_async_queue_timed_pop. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_async_queue_timed_pop() - validating");
		validate_RWaddress( arg0, "g_async_queue_timed_pop - arg0 (queue)");
		validate_NULL_TYPETYPE(  arg0, "g_async_queue_timed_pop - arg0 (queue)");
		validate_RWaddress( arg1, "g_async_queue_timed_pop - arg1 (end_time)");
		validate_NULL_TYPETYPE(  arg1, "g_async_queue_timed_pop - arg1 (end_time)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

