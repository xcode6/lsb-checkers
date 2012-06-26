// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_get_current_event
static GdkEvent *(*funcptr) () = 0;

extern int __lsb_check_params;
GdkEvent * gtk_get_current_event ()
{
	int reset_flag = __lsb_check_params;
	GdkEvent * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_get_current_event()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_get_current_event");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_get_current_event. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_get_current_event() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

