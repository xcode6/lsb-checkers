// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glGetColorTableParameteriv
static void(*funcptr) (GLenum , GLenum , GLint * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void glGetColorTableParameteriv (GLenum arg0 , GLenum arg1 , GLint * arg2 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGetColorTableParameteriv");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "glGetColorTableParameteriv()");
		validate_NULL_TYPETYPE(  arg0, "glGetColorTableParameteriv - arg0");
		validate_NULL_TYPETYPE(  arg1, "glGetColorTableParameteriv - arg1");
	validate_RWaddress( arg2, "glGetColorTableParameteriv - arg2");
		validate_NULL_TYPETYPE(  arg2, "glGetColorTableParameteriv - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

