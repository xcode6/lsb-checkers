// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gsimpleasyncresult.h>
#undef g_simple_async_result_complete_in_idle
static void(*funcptr) (GSimpleAsyncResult * ) = 0;

extern int __lsb_check_params;
void g_simple_async_result_complete_in_idle (GSimpleAsyncResult * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_simple_async_result_complete_in_idle()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_simple_async_result_complete_in_idle");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_simple_async_result_complete_in_idle. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_simple_async_result_complete_in_idle() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_simple_async_result_complete_in_idle - arg0 (simple)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_simple_async_result_complete_in_idle - arg0 (simple)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}
