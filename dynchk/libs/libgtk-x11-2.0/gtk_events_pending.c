// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_events_pending
static gboolean(*funcptr) () = 0;

extern int __lsb_check_params;
gboolean gtk_events_pending ()
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_events_pending()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_events_pending");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_events_pending. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_events_pending() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}
