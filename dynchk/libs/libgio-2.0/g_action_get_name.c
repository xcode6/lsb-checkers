// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gaction.h>
#undef g_action_get_name
static const char *(*funcptr) (GAction * ) = 0;

extern int __lsb_check_params;
const char * g_action_get_name (GAction * arg0 )
{
	int reset_flag = __lsb_check_params;
	const char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_action_get_name()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_action_get_name");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_action_get_name. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_action_get_name() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_action_get_name - arg0 (action)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_action_get_name - arg0 (action)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

