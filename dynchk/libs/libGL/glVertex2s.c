// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glVertex2s
static void(*funcptr) (GLshort , GLshort ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void glVertex2s (GLshort arg0 , GLshort arg1 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glVertex2s");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "glVertex2s()");
		validate_NULL_TYPETYPE(  arg0, "glVertex2s - arg0");
		validate_NULL_TYPETYPE(  arg1, "glVertex2s - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

