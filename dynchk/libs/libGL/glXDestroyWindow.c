// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <GL/glx.h>
#undef glXDestroyWindow
static void(*funcptr) (Display * , GLXWindow ) = 0;

extern int __lsb_check_params;
void glXDestroyWindow (Display * arg0 , GLXWindow arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glXDestroyWindow()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glXDestroyWindow");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glXDestroyWindow. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glXDestroyWindow() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "glXDestroyWindow - arg0 (dpy)");
		}
		validate_NULL_TYPETYPE(  arg0, "glXDestroyWindow - arg0 (dpy)");
		validate_NULL_TYPETYPE(  arg1, "glXDestroyWindow - arg1 (window)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

