// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gbufferedinputstream.h>
#undef g_buffered_input_stream_peek
static gsize(*funcptr) (GBufferedInputStream * , void * , gsize , gsize ) = 0;

extern int __lsb_check_params;
gsize g_buffered_input_stream_peek (GBufferedInputStream * arg0 , void * arg1 , gsize arg2 , gsize arg3 )
{
	int reset_flag = __lsb_check_params;
	gsize ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_buffered_input_stream_peek()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_buffered_input_stream_peek");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_buffered_input_stream_peek. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_buffered_input_stream_peek() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_buffered_input_stream_peek - arg0 (stream)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_buffered_input_stream_peek - arg0 (stream)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_buffered_input_stream_peek - arg1 (buffer)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_buffered_input_stream_peek - arg1 (buffer)");
		validate_NULL_TYPETYPE(  arg2, "g_buffered_input_stream_peek - arg2 (offset)");
		validate_NULL_TYPETYPE(  arg3, "g_buffered_input_stream_peek - arg3 (count)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}
