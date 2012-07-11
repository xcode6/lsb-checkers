// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_io_channel_read_line
static GIOStatus(*funcptr) (GIOChannel * , gchar * * , gsize * , gsize * , GError * * ) = 0;

extern int __lsb_check_params;
GIOStatus g_io_channel_read_line (GIOChannel * arg0 , gchar * * arg1 , gsize * arg2 , gsize * arg3 , GError * * arg4 )
{
	int reset_flag = __lsb_check_params;
	GIOStatus ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_io_channel_read_line()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_io_channel_read_line");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_io_channel_read_line. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_io_channel_read_line() - validating");
		validate_RWaddress( arg0, "g_io_channel_read_line - arg0 (channel)");
		validate_NULL_TYPETYPE(  arg0, "g_io_channel_read_line - arg0 (channel)");
		validate_RWaddress( arg1, "g_io_channel_read_line - arg1 (str_return)");
		validate_NULL_TYPETYPE(  arg1, "g_io_channel_read_line - arg1 (str_return)");
		validate_RWaddress( arg2, "g_io_channel_read_line - arg2 (length)");
		validate_NULL_TYPETYPE(  arg2, "g_io_channel_read_line - arg2 (length)");
		validate_RWaddress( arg3, "g_io_channel_read_line - arg3 (terminator_pos)");
		validate_NULL_TYPETYPE(  arg3, "g_io_channel_read_line - arg3 (terminator_pos)");
		validate_RWaddress( arg4, "g_io_channel_read_line - arg4 (error)");
		validate_NULL_TYPETYPE(  arg4, "g_io_channel_read_line - arg4 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}
