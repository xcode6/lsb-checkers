// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/gfile.h>
#undef g_file_replace_async
static void(*funcptr) (GFile * , const char * , gboolean , GFileCreateFlags , int , GCancellable * , GAsyncReadyCallback , gpointer ) = 0;

extern int __lsb_check_params;
void g_file_replace_async (GFile * arg0 , const char * arg1 , gboolean arg2 , GFileCreateFlags arg3 , int arg4 , GCancellable * arg5 , GAsyncReadyCallback arg6 , gpointer arg7 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_file_replace_async()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_file_replace_async");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_file_replace_async. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_file_replace_async() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_file_replace_async - arg0 (file)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_file_replace_async - arg0 (file)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_file_replace_async - arg1 (etag)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_file_replace_async - arg1 (etag)");
		validate_NULL_TYPETYPE(  arg2, "g_file_replace_async - arg2 (make_backup)");
		validate_NULL_TYPETYPE(  arg3, "g_file_replace_async - arg3 (flags)");
		validate_NULL_TYPETYPE(  arg4, "g_file_replace_async - arg4 (io_priority)");
		if( arg5 ) {
		validate_RWaddress( arg5, "g_file_replace_async - arg5 (cancellable)");
		}
		validate_NULL_TYPETYPE(  arg5, "g_file_replace_async - arg5 (cancellable)");
		validate_NULL_TYPETYPE(  arg6, "g_file_replace_async - arg6 (callback)");
		validate_NULL_TYPETYPE(  arg7, "g_file_replace_async - arg7 (user_data)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
	__lsb_check_params = reset_flag;
}

