// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_static_mutex_get_mutex_impl
static GMutex *(*funcptr) (GMutex * * ) = 0;

extern int __lsb_check_params;
GMutex * g_static_mutex_get_mutex_impl (GMutex * * arg0 )
{
	int reset_flag = __lsb_check_params;
	GMutex * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_static_mutex_get_mutex_impl()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_static_mutex_get_mutex_impl");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_static_mutex_get_mutex_impl. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_static_mutex_get_mutex_impl() - validating");
		validate_RWaddress( arg0, "g_static_mutex_get_mutex_impl - arg0 (mutex)");
		validate_NULL_TYPETYPE(  arg0, "g_static_mutex_get_mutex_impl - arg0 (mutex)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
