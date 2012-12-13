// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <gio-unix-2.0/gio/gunixoutputstream.h>
#undef g_unix_output_stream_new
static GOutputStream *(*funcptr) (gint , gboolean ) = 0;

extern int __lsb_check_params;
GOutputStream * g_unix_output_stream_new (gint arg0 , gboolean arg1 )
{
	int reset_flag = __lsb_check_params;
	GOutputStream * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_unix_output_stream_new()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_unix_output_stream_new");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_unix_output_stream_new. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_unix_output_stream_new() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_unix_output_stream_new - arg0 (fd)");
		validate_NULL_TYPETYPE(  arg1, "g_unix_output_stream_new - arg1 (close_fd)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

