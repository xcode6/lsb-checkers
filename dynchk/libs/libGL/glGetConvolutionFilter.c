// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glGetConvolutionFilter
static void(*funcptr) (GLenum , GLenum , GLenum , GLvoid * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void glGetConvolutionFilter (GLenum arg0 , GLenum arg1 , GLenum arg2 , GLvoid * arg3 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGetConvolutionFilter");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "glGetConvolutionFilter()");
		validate_NULL_TYPETYPE(  arg0, "glGetConvolutionFilter - arg0");
		validate_NULL_TYPETYPE(  arg1, "glGetConvolutionFilter - arg1");
		validate_NULL_TYPETYPE(  arg2, "glGetConvolutionFilter - arg2");
	validate_RWaddress( arg3, "glGetConvolutionFilter - arg3");
		validate_NULL_TYPETYPE(  arg3, "glGetConvolutionFilter - arg3");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

