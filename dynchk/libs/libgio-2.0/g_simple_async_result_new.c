// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gsimpleasyncresult.h>
#undef g_simple_async_result_new
static GSimpleAsyncResult *(*funcptr) (GObject * , GAsyncReadyCallback , gpointer , gpointer ) = 0;

extern int __lsb_check_params;
GSimpleAsyncResult * g_simple_async_result_new (GObject * arg0 , GAsyncReadyCallback arg1 , gpointer arg2 , gpointer arg3 )
{
	int reset_flag = __lsb_check_params;
	GSimpleAsyncResult * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_simple_async_result_new()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_simple_async_result_new");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_simple_async_result_new. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_simple_async_result_new() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_simple_async_result_new - arg0 (source_object)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_simple_async_result_new - arg0 (source_object)");
		validate_NULL_TYPETYPE(  arg1, "g_simple_async_result_new - arg1 (callback)");
		validate_NULL_TYPETYPE(  arg2, "g_simple_async_result_new - arg2 (user_data)");
		validate_NULL_TYPETYPE(  arg3, "g_simple_async_result_new - arg3 (source_tag)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}
