// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_cursor_unref
static void(*funcptr) (GdkCursor * ) = 0;

extern int __lsb_check_params;
void gdk_cursor_unref (GdkCursor * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_cursor_unref()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_cursor_unref");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_cursor_unref. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_cursor_unref() - validating");
		validate_RWaddress( arg0, "gdk_cursor_unref - arg0 (cursor)");
		validate_NULL_TYPETYPE(  arg0, "gdk_cursor_unref - arg0 (cursor)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

