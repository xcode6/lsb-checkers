// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gio-unix-2.0/gio/gunixinputstream.h>
#include <glib-2.0/glib.h>
#undef g_unix_input_stream_set_close_fd
static void(*funcptr) (GUnixInputStream * , gboolean ) = 0;

extern int __lsb_check_params;
void g_unix_input_stream_set_close_fd (GUnixInputStream * arg0 , gboolean arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_unix_input_stream_set_close_fd()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_unix_input_stream_set_close_fd");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_unix_input_stream_set_close_fd. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_unix_input_stream_set_close_fd() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_unix_input_stream_set_close_fd - arg0 (stream)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_unix_input_stream_set_close_fd - arg0 (stream)");
		validate_NULL_TYPETYPE(  arg1, "g_unix_input_stream_set_close_fd - arg1 (close_fd)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

