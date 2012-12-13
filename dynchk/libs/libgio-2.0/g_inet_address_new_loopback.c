// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/ginetaddress.h>
#undef g_inet_address_new_loopback
static GInetAddress *(*funcptr) (GSocketFamily ) = 0;

extern int __lsb_check_params;
GInetAddress * g_inet_address_new_loopback (GSocketFamily arg0 )
{
	int reset_flag = __lsb_check_params;
	GInetAddress * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_inet_address_new_loopback()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_inet_address_new_loopback");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_inet_address_new_loopback. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_inet_address_new_loopback() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_inet_address_new_loopback - arg0 (family)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

