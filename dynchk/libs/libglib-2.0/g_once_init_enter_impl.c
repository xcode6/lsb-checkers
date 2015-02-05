// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_once_init_enter_impl
static gboolean(*funcptr) (unsigned int volatile  * ) = 0;

extern int __lsb_check_params;
gboolean g_once_init_enter_impl (unsigned int volatile  * arg0 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_once_init_enter_impl()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_once_init_enter_impl");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_once_init_enter_impl. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_once_init_enter_impl() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_once_init_enter_impl - arg0 (location)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_once_init_enter_impl - arg0 (location)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
