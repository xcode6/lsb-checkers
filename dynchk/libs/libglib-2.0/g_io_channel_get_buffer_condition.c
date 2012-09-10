// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_io_channel_get_buffer_condition
static GIOCondition(*funcptr) (GIOChannel * ) = 0;

extern int __lsb_check_params;
GIOCondition g_io_channel_get_buffer_condition (GIOChannel * arg0 )
{
	int reset_flag = __lsb_check_params;
	GIOCondition ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_io_channel_get_buffer_condition()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_io_channel_get_buffer_condition");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_io_channel_get_buffer_condition. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_io_channel_get_buffer_condition() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_io_channel_get_buffer_condition - arg0 (channel)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_io_channel_get_buffer_condition - arg0 (channel)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

