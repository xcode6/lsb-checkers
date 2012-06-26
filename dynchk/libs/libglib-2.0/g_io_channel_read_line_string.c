// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_io_channel_read_line_string
static GIOStatus(*funcptr) (GIOChannel * , GString * , gsize * , GError * * ) = 0;

extern int __lsb_check_params;
GIOStatus g_io_channel_read_line_string (GIOChannel * arg0 , GString * arg1 , gsize * arg2 , GError * * arg3 )
{
	int reset_flag = __lsb_check_params;
	GIOStatus ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_io_channel_read_line_string()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_io_channel_read_line_string");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_io_channel_read_line_string. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_io_channel_read_line_string() - validating");
		validate_RWaddress( arg0, "g_io_channel_read_line_string - arg0 (channel)");
		validate_NULL_TYPETYPE(  arg0, "g_io_channel_read_line_string - arg0 (channel)");
		validate_RWaddress( arg1, "g_io_channel_read_line_string - arg1 (buffer)");
		validate_NULL_TYPETYPE(  arg1, "g_io_channel_read_line_string - arg1 (buffer)");
		validate_RWaddress( arg2, "g_io_channel_read_line_string - arg2 (terminator_pos)");
		validate_NULL_TYPETYPE(  arg2, "g_io_channel_read_line_string - arg2 (terminator_pos)");
		validate_RWaddress( arg3, "g_io_channel_read_line_string - arg3 (error)");
		validate_NULL_TYPETYPE(  arg3, "g_io_channel_read_line_string - arg3 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

