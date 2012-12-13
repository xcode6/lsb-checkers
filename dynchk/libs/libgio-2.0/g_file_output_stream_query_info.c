// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gfileoutputstream.h>
#undef g_file_output_stream_query_info
static GFileInfo *(*funcptr) (GFileOutputStream * , const char * , GCancellable * , GError * * ) = 0;

extern int __lsb_check_params;
GFileInfo * g_file_output_stream_query_info (GFileOutputStream * arg0 , const char * arg1 , GCancellable * arg2 , GError * * arg3 )
{
	int reset_flag = __lsb_check_params;
	GFileInfo * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_file_output_stream_query_info()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_file_output_stream_query_info");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_file_output_stream_query_info. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_file_output_stream_query_info() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_file_output_stream_query_info - arg0 (stream)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_file_output_stream_query_info - arg0 (stream)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_file_output_stream_query_info - arg1 (attributes)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_file_output_stream_query_info - arg1 (attributes)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_file_output_stream_query_info - arg2 (cancellable)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_file_output_stream_query_info - arg2 (cancellable)");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_file_output_stream_query_info - arg3 (error)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_file_output_stream_query_info - arg3 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

