// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_unichar_isdefined
static gboolean(*funcptr) (gunichar ) = 0;

extern int __lsb_check_params;
gboolean g_unichar_isdefined (gunichar arg0 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_unichar_isdefined()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_unichar_isdefined");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_unichar_isdefined. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_unichar_isdefined() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_unichar_isdefined - arg0 (c)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

