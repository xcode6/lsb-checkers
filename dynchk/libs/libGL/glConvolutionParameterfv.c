// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glConvolutionParameterfv
static void(*funcptr) (GLenum , GLenum , GLfloat * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void glConvolutionParameterfv (GLenum arg0 , GLenum arg1 , GLfloat * arg2 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glConvolutionParameterfv");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "glConvolutionParameterfv()");
		validate_NULL_TYPETYPE(  arg0, "glConvolutionParameterfv - arg0");
		validate_NULL_TYPETYPE(  arg1, "glConvolutionParameterfv - arg1");
	validate_RWaddress( arg2, "glConvolutionParameterfv - arg2");
		validate_NULL_TYPETYPE(  arg2, "glConvolutionParameterfv - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

