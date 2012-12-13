// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gsimpleasyncresult.h>
#undef g_simple_async_result_get_op_res_gboolean
static gboolean(*funcptr) (GSimpleAsyncResult * ) = 0;

extern int __lsb_check_params;
gboolean g_simple_async_result_get_op_res_gboolean (GSimpleAsyncResult * arg0 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_simple_async_result_get_op_res_gboolean()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_simple_async_result_get_op_res_gboolean");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_simple_async_result_get_op_res_gboolean. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_simple_async_result_get_op_res_gboolean() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_simple_async_result_get_op_res_gboolean - arg0 (simple)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_simple_async_result_get_op_res_gboolean - arg0 (simple)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

