// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gresource.h>
#undef g_resources_unregister
static void(*funcptr) (GResource * ) = 0;

extern int __lsb_check_params;
void g_resources_unregister (GResource * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_resources_unregister()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_resources_unregister");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_resources_unregister. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_resources_unregister() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_resources_unregister - arg0 (resource)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_resources_unregister - arg0 (resource)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

