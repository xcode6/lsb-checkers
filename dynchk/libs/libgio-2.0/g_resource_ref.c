// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gresource.h>
#undef g_resource_ref
static GResource *(*funcptr) (GResource * ) = 0;

extern int __lsb_check_params;
GResource * g_resource_ref (GResource * arg0 )
{
	int reset_flag = __lsb_check_params;
	GResource * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_resource_ref()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_resource_ref");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_resource_ref. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_resource_ref() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_resource_ref - arg0 (resource)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_resource_ref - arg0 (resource)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

