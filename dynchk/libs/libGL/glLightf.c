// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glLightf
static void(*funcptr) (GLenum , GLenum , GLfloat ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void glLightf (GLenum arg0 , GLenum arg1 , GLfloat arg2 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glLightf");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "glLightf()");
		validate_NULL_TYPETYPE(  arg0, "glLightf - arg0");
		validate_NULL_TYPETYPE(  arg1, "glLightf - arg1");
		validate_NULL_TYPETYPE(  arg2, "glLightf - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

