// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <GL/glx.h>
#undef glXGetFBConfigAttrib
static int(*funcptr) (Display * , GLXFBConfig , int , int * ) = 0;

extern int __lsb_check_params;
int glXGetFBConfigAttrib (Display * arg0 , GLXFBConfig arg1 , int arg2 , int * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for glXGetFBConfigAttrib()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glXGetFBConfigAttrib");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glXGetFBConfigAttrib. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glXGetFBConfigAttrib() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "glXGetFBConfigAttrib - arg0 (dpy)");
		}
		validate_NULL_TYPETYPE(  arg0, "glXGetFBConfigAttrib - arg0 (dpy)");
		validate_NULL_TYPETYPE(  arg1, "glXGetFBConfigAttrib - arg1 (config)");
		validate_NULL_TYPETYPE(  arg2, "glXGetFBConfigAttrib - arg2 (attribute)");
		if( arg3 ) {
		validate_RWaddress( arg3, "glXGetFBConfigAttrib - arg3 (value)");
		}
		validate_NULL_TYPETYPE(  arg3, "glXGetFBConfigAttrib - arg3 (value)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

