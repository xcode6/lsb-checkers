// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glIndexub
static void(*funcptr) (GLubyte ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void glIndexub (GLubyte arg0 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glIndexub");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "glIndexub()");
		validate_NULL_TYPETYPE(  arg0, "glIndexub - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

