// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <gdk-pixbuf-2.0/gdk-pixbuf-xlib/gdk-pixbuf-xlib.h>
#undef gdk_pixbuf_xlib_init
static void(*funcptr) (Display * , int ) = 0;

extern int __lsb_check_params;
void gdk_pixbuf_xlib_init (Display * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_pixbuf_xlib_init()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_pixbuf_xlib_init");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_pixbuf_xlib_init. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_pixbuf_xlib_init() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_pixbuf_xlib_init - arg0 (display)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_pixbuf_xlib_init - arg0 (display)");
		validate_NULL_TYPETYPE(  arg1, "gdk_pixbuf_xlib_init - arg1 (screen_num)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

