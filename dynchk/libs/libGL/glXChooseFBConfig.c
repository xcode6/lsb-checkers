// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <GL/glx.h>
#undef glXChooseFBConfig
static GLXFBConfig *(*funcptr) (Display * , int , int * , int * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
GLXFBConfig * glXChooseFBConfig (Display * arg0 , int arg1 , int * arg2 , int * arg3 )
{
	int reset_flag = __lsb_check_params;
	GLXFBConfig * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glXChooseFBConfig");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "glXChooseFBConfig()");
	validate_RWaddress( arg0, "glXChooseFBConfig - arg0");
		validate_NULL_TYPETYPE(  arg0, "glXChooseFBConfig - arg0");
		validate_NULL_TYPETYPE(  arg1, "glXChooseFBConfig - arg1");
	validate_RWaddress( arg2, "glXChooseFBConfig - arg2");
		validate_NULL_TYPETYPE(  arg2, "glXChooseFBConfig - arg2");
	validate_RWaddress( arg3, "glXChooseFBConfig - arg3");
		validate_NULL_TYPETYPE(  arg3, "glXChooseFBConfig - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

