// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_io_channel_write_chars
static GIOStatus(*funcptr) (GIOChannel * , const gchar * , gssize , gsize * , GError * * ) = 0;

extern int __lsb_check_params;
GIOStatus g_io_channel_write_chars (GIOChannel * arg0 , const gchar * arg1 , gssize arg2 , gsize * arg3 , GError * * arg4 )
{
	int reset_flag = __lsb_check_params;
	GIOStatus ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_io_channel_write_chars()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_io_channel_write_chars");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_io_channel_write_chars. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_io_channel_write_chars() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_io_channel_write_chars - arg0 (channel)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_io_channel_write_chars - arg0 (channel)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_io_channel_write_chars - arg1 (buf)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_io_channel_write_chars - arg1 (buf)");
		validate_NULL_TYPETYPE(  arg2, "g_io_channel_write_chars - arg2 (count)");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_io_channel_write_chars - arg3 (bytes_written)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_io_channel_write_chars - arg3 (bytes_written)");
		if( arg4 ) {
		validate_RWaddress( arg4, "g_io_channel_write_chars - arg4 (error)");
		}
		validate_NULL_TYPETYPE(  arg4, "g_io_channel_write_chars - arg4 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

