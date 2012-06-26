// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#undef g_signal_chain_from_overridden
static void(*funcptr) (const GValue * , GValue * ) = 0;

extern int __lsb_check_params;
void g_signal_chain_from_overridden (const GValue * arg0 , GValue * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_signal_chain_from_overridden()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_signal_chain_from_overridden");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_signal_chain_from_overridden. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_signal_chain_from_overridden() - validating");
		validate_Rdaddress( arg0, "g_signal_chain_from_overridden - arg0");
		validate_NULL_TYPETYPE(  arg0, "g_signal_chain_from_overridden - arg0");
		validate_RWaddress( arg1, "g_signal_chain_from_overridden - arg1");
		validate_NULL_TYPETYPE(  arg1, "g_signal_chain_from_overridden - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

