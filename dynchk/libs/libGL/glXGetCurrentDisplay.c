// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <GL/glx.h>
#undef glXGetCurrentDisplay
static Display *(*funcptr) () = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
Display * glXGetCurrentDisplay ()
{
	int reset_flag = __lsb_check_params;
	Display * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glXGetCurrentDisplay");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "glXGetCurrentDisplay()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

