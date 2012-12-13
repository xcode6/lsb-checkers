// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gdatainputstream.h>
#undef g_data_input_stream_read_uint64
static guint64(*funcptr) (GDataInputStream * , GCancellable * , GError * * ) = 0;

extern int __lsb_check_params;
guint64 g_data_input_stream_read_uint64 (GDataInputStream * arg0 , GCancellable * arg1 , GError * * arg2 )
{
	int reset_flag = __lsb_check_params;
	guint64 ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_data_input_stream_read_uint64()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_data_input_stream_read_uint64");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_data_input_stream_read_uint64. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_data_input_stream_read_uint64() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_data_input_stream_read_uint64 - arg0 (stream)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_data_input_stream_read_uint64 - arg0 (stream)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_data_input_stream_read_uint64 - arg1 (cancellable)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_data_input_stream_read_uint64 - arg1 (cancellable)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_data_input_stream_read_uint64 - arg2 (error)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_data_input_stream_read_uint64 - arg2 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

