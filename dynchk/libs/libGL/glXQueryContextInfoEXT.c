// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <GL/glx.h>
#undef glXQueryContextInfoEXT
static int(*funcptr) (Display * , GLXContext , int , int * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int glXQueryContextInfoEXT (Display * arg0 , GLXContext arg1 , int arg2 , int * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glXQueryContextInfoEXT");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "glXQueryContextInfoEXT()");
	validate_RWaddress( arg0, "glXQueryContextInfoEXT - arg0");
		validate_NULL_TYPETYPE(  arg0, "glXQueryContextInfoEXT - arg0");
		validate_NULL_TYPETYPE(  arg1, "glXQueryContextInfoEXT - arg1");
		validate_NULL_TYPETYPE(  arg2, "glXQueryContextInfoEXT - arg2");
	validate_RWaddress( arg3, "glXQueryContextInfoEXT - arg3");
		validate_NULL_TYPETYPE(  arg3, "glXQueryContextInfoEXT - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

