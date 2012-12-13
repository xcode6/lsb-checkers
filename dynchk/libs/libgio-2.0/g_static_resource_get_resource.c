// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/gresource.h>
#undef g_static_resource_get_resource
static GResource *(*funcptr) (GStaticResource * ) = 0;

extern int __lsb_check_params;
GResource * g_static_resource_get_resource (GStaticResource * arg0 )
{
	int reset_flag = __lsb_check_params;
	GResource * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_static_resource_get_resource()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_static_resource_get_resource");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_static_resource_get_resource. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_static_resource_get_resource() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_static_resource_get_resource - arg0 (static_resource)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_static_resource_get_resource - arg0 (static_resource)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

