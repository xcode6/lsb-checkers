// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <atk-1.0/atk/atk.h>
#undef atk_remove_global_event_listener
static void(*funcptr) (guint ) = 0;

extern int __lsb_check_params;
void atk_remove_global_event_listener (guint arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for atk_remove_global_event_listener()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atk_remove_global_event_listener");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load atk_remove_global_event_listener. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "atk_remove_global_event_listener() - validating");
		validate_NULL_TYPETYPE(  arg0, "atk_remove_global_event_listener - arg0 (listener_id)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}
