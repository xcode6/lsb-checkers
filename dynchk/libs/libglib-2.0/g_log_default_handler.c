// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_log_default_handler
static void(*funcptr) (const gchar * , GLogLevelFlags , const gchar * , gpointer ) = 0;

extern int __lsb_check_params;
void g_log_default_handler (const gchar * arg0 , GLogLevelFlags arg1 , const gchar * arg2 , gpointer arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_log_default_handler()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_log_default_handler");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_log_default_handler. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_log_default_handler() - validating");
		validate_Rdaddress( arg0, "g_log_default_handler - arg0 (log_domain)");
		validate_NULL_TYPETYPE(  arg0, "g_log_default_handler - arg0 (log_domain)");
		validate_NULL_TYPETYPE(  arg1, "g_log_default_handler - arg1 (log_level)");
		validate_Rdaddress( arg2, "g_log_default_handler - arg2 (message)");
		validate_NULL_TYPETYPE(  arg2, "g_log_default_handler - arg2 (message)");
		validate_NULL_TYPETYPE(  arg3, "g_log_default_handler - arg3 (unused_data)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

