// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <GL/glx.h>
#undef glXCreateNewContext
static GLXContext(*funcptr) (Display * , GLXFBConfig , int , GLXContext , int ) = 0;

extern int __lsb_check_params;
GLXContext glXCreateNewContext (Display * arg0 , GLXFBConfig arg1 , int arg2 , GLXContext arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	GLXContext ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " glXCreateNewContext ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "glXCreateNewContext()");
		validate_RWaddress( arg0, "glXCreateNewContext - arg0");
		validate_NULL_TYPETYPE(  arg0, "glXCreateNewContext - arg0");
		validate_NULL_TYPETYPE(  arg1, "glXCreateNewContext - arg1");
		validate_NULL_TYPETYPE(  arg2, "glXCreateNewContext - arg2");
		validate_NULL_TYPETYPE(  arg3, "glXCreateNewContext - arg3");
		validate_NULL_TYPETYPE(  arg4, "glXCreateNewContext - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

