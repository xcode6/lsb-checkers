// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glSeparableFilter2D
static void(*funcptr) (GLenum , GLenum , GLsizei , GLsizei , GLenum , GLenum , GLvoid * , GLvoid * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void glSeparableFilter2D (GLenum arg0 , GLenum arg1 , GLsizei arg2 , GLsizei arg3 , GLenum arg4 , GLenum arg5 , GLvoid * arg6 , GLvoid * arg7 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glSeparableFilter2D");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "glSeparableFilter2D()");
		validate_NULL_TYPETYPE(  arg0, "glSeparableFilter2D - arg0");
		validate_NULL_TYPETYPE(  arg1, "glSeparableFilter2D - arg1");
		validate_NULL_TYPETYPE(  arg2, "glSeparableFilter2D - arg2");
		validate_NULL_TYPETYPE(  arg3, "glSeparableFilter2D - arg3");
		validate_NULL_TYPETYPE(  arg4, "glSeparableFilter2D - arg4");
		validate_NULL_TYPETYPE(  arg5, "glSeparableFilter2D - arg5");
	validate_RWaddress( arg6, "glSeparableFilter2D - arg6");
		validate_NULL_TYPETYPE(  arg6, "glSeparableFilter2D - arg6");
	validate_RWaddress( arg7, "glSeparableFilter2D - arg7");
		validate_NULL_TYPETYPE(  arg7, "glSeparableFilter2D - arg7");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
	__lsb_check_params = reset_flag;
}

