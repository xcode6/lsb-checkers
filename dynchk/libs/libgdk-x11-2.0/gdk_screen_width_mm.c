// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_screen_width_mm
static gint(*funcptr) () = 0;

extern int __lsb_check_params;
gint gdk_screen_width_mm ()
{
	int reset_flag = __lsb_check_params;
	gint ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_screen_width_mm()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_screen_width_mm");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_screen_width_mm. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_screen_width_mm() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

