// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glRasterPos4f
static void(*funcptr) (GLfloat , GLfloat , GLfloat , GLfloat ) = 0;

extern int __lsb_check_params;
void glRasterPos4f (GLfloat arg0 , GLfloat arg1 , GLfloat arg2 , GLfloat arg3 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " glRasterPos4f ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "glRasterPos4f()");
		validate_NULL_TYPETYPE(  arg0, "glRasterPos4f - arg0");
		validate_NULL_TYPETYPE(  arg1, "glRasterPos4f - arg1");
		validate_NULL_TYPETYPE(  arg2, "glRasterPos4f - arg2");
		validate_NULL_TYPETYPE(  arg3, "glRasterPos4f - arg3");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

