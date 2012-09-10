// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#include <glib-2.0/glib.h>
#undef g_signal_emitv
static void(*funcptr) (const GValue * , guint , GQuark , GValue * ) = 0;

extern int __lsb_check_params;
void g_signal_emitv (const GValue * arg0 , guint arg1 , GQuark arg2 , GValue * arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_signal_emitv()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_signal_emitv");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_signal_emitv. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_signal_emitv() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_signal_emitv - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "g_signal_emitv - arg0");
		validate_NULL_TYPETYPE(  arg1, "g_signal_emitv - arg1");
		validate_NULL_TYPETYPE(  arg2, "g_signal_emitv - arg2");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_signal_emitv - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "g_signal_emitv - arg3");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

