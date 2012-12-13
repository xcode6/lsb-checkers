// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gfile.h>
#undef g_file_append_to_async
static void(*funcptr) (GFile * , GFileCreateFlags , int , GCancellable * , GAsyncReadyCallback , gpointer ) = 0;

extern int __lsb_check_params;
void g_file_append_to_async (GFile * arg0 , GFileCreateFlags arg1 , int arg2 , GCancellable * arg3 , GAsyncReadyCallback arg4 , gpointer arg5 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_file_append_to_async()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_file_append_to_async");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_file_append_to_async. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_file_append_to_async() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_file_append_to_async - arg0 (file)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_file_append_to_async - arg0 (file)");
		validate_NULL_TYPETYPE(  arg1, "g_file_append_to_async - arg1 (flags)");
		validate_NULL_TYPETYPE(  arg2, "g_file_append_to_async - arg2 (io_priority)");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_file_append_to_async - arg3 (cancellable)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_file_append_to_async - arg3 (cancellable)");
		validate_NULL_TYPETYPE(  arg4, "g_file_append_to_async - arg4 (callback)");
		validate_NULL_TYPETYPE(  arg5, "g_file_append_to_async - arg5 (user_data)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}

