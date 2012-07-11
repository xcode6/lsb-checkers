// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk-pixbuf-xlib/gdk-pixbuf-xlib.h>
#undef xlib_rgb_get_screen
static Screen *(*funcptr) () = 0;

extern int __lsb_check_params;
Screen * xlib_rgb_get_screen ()
{
	int reset_flag = __lsb_check_params;
	Screen * ret_value  ;
	__lsb_output(4, "Invoking wrapper for xlib_rgb_get_screen()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xlib_rgb_get_screen");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xlib_rgb_get_screen. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xlib_rgb_get_screen() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}
