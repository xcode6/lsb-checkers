// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gmemoryoutputstream.h>
#undef g_memory_output_stream_new
static GOutputStream *(*funcptr) (gpointer , gsize , GReallocFunc , GDestroyNotify ) = 0;

extern int __lsb_check_params;
GOutputStream * g_memory_output_stream_new (gpointer arg0 , gsize arg1 , GReallocFunc arg2 , GDestroyNotify arg3 )
{
	int reset_flag = __lsb_check_params;
	GOutputStream * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_memory_output_stream_new()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_memory_output_stream_new");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_memory_output_stream_new. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_memory_output_stream_new() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_memory_output_stream_new - arg0 (data)");
		validate_NULL_TYPETYPE(  arg1, "g_memory_output_stream_new - arg1 (size)");
		validate_NULL_TYPETYPE(  arg2, "g_memory_output_stream_new - arg2 (realloc_function)");
		validate_NULL_TYPETYPE(  arg3, "g_memory_output_stream_new - arg3 (destroy_function)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

