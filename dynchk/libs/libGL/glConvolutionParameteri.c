// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glConvolutionParameteri
static void(*funcptr) (GLenum , GLenum , GLint ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void glConvolutionParameteri (GLenum arg0 , GLenum arg1 , GLint arg2 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glConvolutionParameteri");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "glConvolutionParameteri()");
		validate_NULL_TYPETYPE(  arg0, "glConvolutionParameteri - arg0");
		validate_NULL_TYPETYPE(  arg1, "glConvolutionParameteri - arg1");
		validate_NULL_TYPETYPE(  arg2, "glConvolutionParameteri - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

