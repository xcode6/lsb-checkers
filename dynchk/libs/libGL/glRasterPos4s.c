// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glRasterPos4s
static void(*funcptr) (GLshort , GLshort , GLshort , GLshort ) = 0;

extern int __lsb_check_params;
void glRasterPos4s (GLshort arg0 , GLshort arg1 , GLshort arg2 , GLshort arg3 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " glRasterPos4s ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "glRasterPos4s()");
		validate_NULL_TYPETYPE(  arg0, "glRasterPos4s - arg0");
		validate_NULL_TYPETYPE(  arg1, "glRasterPos4s - arg1");
		validate_NULL_TYPETYPE(  arg2, "glRasterPos4s - arg2");
		validate_NULL_TYPETYPE(  arg3, "glRasterPos4s - arg3");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

