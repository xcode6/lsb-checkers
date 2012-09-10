// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_option_context_add_group
static void(*funcptr) (GOptionContext * , GOptionGroup * ) = 0;

extern int __lsb_check_params;
void g_option_context_add_group (GOptionContext * arg0 , GOptionGroup * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_option_context_add_group()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_option_context_add_group");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_option_context_add_group. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_option_context_add_group() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_option_context_add_group - arg0 (context)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_option_context_add_group - arg0 (context)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_option_context_add_group - arg1 (group)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_option_context_add_group - arg1 (group)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

