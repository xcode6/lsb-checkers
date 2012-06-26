// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <stdarg.h>
#include <glib-2.0/glib-object.h>
#undef g_signal_emit_valist
static void(*funcptr) (gpointer , guint , GQuark , va_list ) = 0;

extern int __lsb_check_params;
void g_signal_emit_valist (gpointer arg0 , guint arg1 , GQuark arg2 , va_list arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_signal_emit_valist()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_signal_emit_valist");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_signal_emit_valist. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_signal_emit_valist() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_signal_emit_valist - arg0");
		validate_NULL_TYPETYPE(  arg1, "g_signal_emit_valist - arg1");
		validate_NULL_TYPETYPE(  arg2, "g_signal_emit_valist - arg2");
		validate_NULL_TYPETYPE(  arg3, "g_signal_emit_valist - arg3");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

