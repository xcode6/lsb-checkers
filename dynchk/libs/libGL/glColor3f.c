// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glColor3f
static void(*funcptr) (GLfloat , GLfloat , GLfloat ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void glColor3f (GLfloat arg0 , GLfloat arg1 , GLfloat arg2 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glColor3f");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "glColor3f()");
		validate_NULL_TYPETYPE(  arg0, "glColor3f - arg0");
		validate_NULL_TYPETYPE(  arg1, "glColor3f - arg1");
		validate_NULL_TYPETYPE(  arg2, "glColor3f - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

