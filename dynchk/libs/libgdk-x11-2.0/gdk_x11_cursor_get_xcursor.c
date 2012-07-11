// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <gtk-2.0/gdk/gdkx.h>
#undef gdk_x11_cursor_get_xcursor
static Cursor(*funcptr) (GdkCursor * ) = 0;

extern int __lsb_check_params;
Cursor gdk_x11_cursor_get_xcursor (GdkCursor * arg0 )
{
	int reset_flag = __lsb_check_params;
	Cursor ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_x11_cursor_get_xcursor()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_x11_cursor_get_xcursor");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_x11_cursor_get_xcursor. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_x11_cursor_get_xcursor() - validating");
		validate_RWaddress( arg0, "gdk_x11_cursor_get_xcursor - arg0 (cursor)");
		validate_NULL_TYPETYPE(  arg0, "gdk_x11_cursor_get_xcursor - arg0 (cursor)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
