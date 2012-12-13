// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gnetworkaddress.h>
#undef g_network_address_get_hostname
static const char *(*funcptr) (GNetworkAddress * ) = 0;

extern int __lsb_check_params;
const char * g_network_address_get_hostname (GNetworkAddress * arg0 )
{
	int reset_flag = __lsb_check_params;
	const char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_network_address_get_hostname()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_network_address_get_hostname");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_network_address_get_hostname. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_network_address_get_hostname() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_network_address_get_hostname - arg0 (addr)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_network_address_get_hostname - arg0 (addr)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

