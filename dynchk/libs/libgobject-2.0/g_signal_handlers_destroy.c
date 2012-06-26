// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#undef g_signal_handlers_destroy
static void(*funcptr) (gpointer ) = 0;

extern int __lsb_check_params;
void g_signal_handlers_destroy (gpointer arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_signal_handlers_destroy()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_signal_handlers_destroy");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_signal_handlers_destroy. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_signal_handlers_destroy() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_signal_handlers_destroy - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

