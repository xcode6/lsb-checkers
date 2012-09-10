// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_option_context_get_ignore_unknown_options
static gboolean(*funcptr) (GOptionContext * ) = 0;

extern int __lsb_check_params;
gboolean g_option_context_get_ignore_unknown_options (GOptionContext * arg0 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_option_context_get_ignore_unknown_options()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_option_context_get_ignore_unknown_options");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_option_context_get_ignore_unknown_options. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_option_context_get_ignore_unknown_options() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_option_context_get_ignore_unknown_options - arg0 (context)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_option_context_get_ignore_unknown_options - arg0 (context)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

