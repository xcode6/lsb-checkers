// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glGetLightfv
static void(*funcptr) (GLenum , GLenum , GLfloat * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void glGetLightfv (GLenum arg0 , GLenum arg1 , GLfloat * arg2 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGetLightfv");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "glGetLightfv()");
		validate_NULL_TYPETYPE(  arg0, "glGetLightfv - arg0");
		validate_NULL_TYPETYPE(  arg1, "glGetLightfv - arg1");
	validate_RWaddress( arg2, "glGetLightfv - arg2");
		validate_NULL_TYPETYPE(  arg2, "glGetLightfv - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

