// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/gsocketclient.h>
#undef g_socket_client_new
static GSocketClient *(*funcptr) () = 0;

extern int __lsb_check_params;
GSocketClient * g_socket_client_new ()
{
	int reset_flag = __lsb_check_params;
	GSocketClient * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_socket_client_new()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_socket_client_new");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_socket_client_new. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_socket_client_new() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

