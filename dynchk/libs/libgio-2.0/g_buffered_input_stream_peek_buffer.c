// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gbufferedinputstream.h>
#undef g_buffered_input_stream_peek_buffer
static const void *(*funcptr) (GBufferedInputStream * , gsize * ) = 0;

extern int __lsb_check_params;
const void * g_buffered_input_stream_peek_buffer (GBufferedInputStream * arg0 , gsize * arg1 )
{
	int reset_flag = __lsb_check_params;
	const void * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_buffered_input_stream_peek_buffer()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_buffered_input_stream_peek_buffer");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_buffered_input_stream_peek_buffer. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_buffered_input_stream_peek_buffer() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_buffered_input_stream_peek_buffer - arg0 (stream)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_buffered_input_stream_peek_buffer - arg0 (stream)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_buffered_input_stream_peek_buffer - arg1 (count)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_buffered_input_stream_peek_buffer - arg1 (count)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
