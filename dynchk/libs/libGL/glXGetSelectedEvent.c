// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <GL/glx.h>
#undef glXGetSelectedEvent
static void(*funcptr) (Display * , GLXDrawable , unsigned long int * ) = 0;

extern int __lsb_check_params;
void glXGetSelectedEvent (Display * arg0 , GLXDrawable arg1 , unsigned long int * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glXGetSelectedEvent()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glXGetSelectedEvent");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glXGetSelectedEvent. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glXGetSelectedEvent() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "glXGetSelectedEvent - arg0 (dpy)");
		}
		validate_NULL_TYPETYPE(  arg0, "glXGetSelectedEvent - arg0 (dpy)");
		validate_NULL_TYPETYPE(  arg1, "glXGetSelectedEvent - arg1 (drawable)");
		validate_RWaddress( arg2, "glXGetSelectedEvent - arg2 (mask)");
		validate_NULL_TYPETYPE(  arg2, "glXGetSelectedEvent - arg2 (mask)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

