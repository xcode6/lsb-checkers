// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <GL/glx.h>
#undef glXQueryServerString
static char *(*funcptr) (Display * , int , int ) = 0;

extern int __lsb_check_params;
char * glXQueryServerString (Display * arg0 , int arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " glXQueryServerString ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "glXQueryServerString()");
		validate_RWaddress( arg0, "glXQueryServerString - arg0");
		validate_NULL_TYPETYPE(  arg0, "glXQueryServerString - arg0");
		validate_NULL_TYPETYPE(  arg1, "glXQueryServerString - arg1");
		validate_NULL_TYPETYPE(  arg2, "glXQueryServerString - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

