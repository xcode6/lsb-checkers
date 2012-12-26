// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#include <glib-2.0/glib.h>
#undef g_signal_accumulator_first_wins
static gboolean(*funcptr) (GSignalInvocationHint * , GValue * , const GValue * , gpointer ) = 0;

extern int __lsb_check_params;
gboolean g_signal_accumulator_first_wins (GSignalInvocationHint * arg0 , GValue * arg1 , const GValue * arg2 , gpointer arg3 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_signal_accumulator_first_wins()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_signal_accumulator_first_wins");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_signal_accumulator_first_wins. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_signal_accumulator_first_wins() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_signal_accumulator_first_wins - arg0 (ihint)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_signal_accumulator_first_wins - arg0 (ihint)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_signal_accumulator_first_wins - arg1 (return_accu)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_signal_accumulator_first_wins - arg1 (return_accu)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "g_signal_accumulator_first_wins - arg2 (handler_return)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_signal_accumulator_first_wins - arg2 (handler_return)");
		validate_NULL_TYPETYPE(  arg3, "g_signal_accumulator_first_wins - arg3 (dummy)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

