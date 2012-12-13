// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gsimpleasyncresult.h>
#undef g_simple_async_result_is_valid
static gboolean(*funcptr) (GAsyncResult * , GObject * , gpointer ) = 0;

extern int __lsb_check_params;
gboolean g_simple_async_result_is_valid (GAsyncResult * arg0 , GObject * arg1 , gpointer arg2 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_simple_async_result_is_valid()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_simple_async_result_is_valid");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_simple_async_result_is_valid. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_simple_async_result_is_valid() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_simple_async_result_is_valid - arg0 (result)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_simple_async_result_is_valid - arg0 (result)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_simple_async_result_is_valid - arg1 (source)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_simple_async_result_is_valid - arg1 (source)");
		validate_NULL_TYPETYPE(  arg2, "g_simple_async_result_is_valid - arg2 (source_tag)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

