// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_io_channel_set_line_term
static void(*funcptr) (GIOChannel * , const gchar * , gint ) = 0;

extern int __lsb_check_params;
void g_io_channel_set_line_term (GIOChannel * arg0 , const gchar * arg1 , gint arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_io_channel_set_line_term()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_io_channel_set_line_term");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_io_channel_set_line_term. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_io_channel_set_line_term() - validating");
		validate_RWaddress( arg0, "g_io_channel_set_line_term - arg0 (channel)");
		validate_NULL_TYPETYPE(  arg0, "g_io_channel_set_line_term - arg0 (channel)");
		validate_Rdaddress( arg1, "g_io_channel_set_line_term - arg1 (line_term)");
		validate_NULL_TYPETYPE(  arg1, "g_io_channel_set_line_term - arg1 (line_term)");
		validate_NULL_TYPETYPE(  arg2, "g_io_channel_set_line_term - arg2 (length)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

