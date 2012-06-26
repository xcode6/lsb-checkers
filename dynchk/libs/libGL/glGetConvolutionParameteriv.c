// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glGetConvolutionParameteriv
static void(*funcptr) (GLenum , GLenum , GLint * ) = 0;

extern int __lsb_check_params;
void glGetConvolutionParameteriv (GLenum arg0 , GLenum arg1 , GLint * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glGetConvolutionParameteriv()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGetConvolutionParameteriv");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glGetConvolutionParameteriv. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glGetConvolutionParameteriv() - validating");
		validate_NULL_TYPETYPE(  arg0, "glGetConvolutionParameteriv - arg0 (target)");
		validate_NULL_TYPETYPE(  arg1, "glGetConvolutionParameteriv - arg1 (pname)");
		validate_RWaddress( arg2, "glGetConvolutionParameteriv - arg2 (params)");
		validate_NULL_TYPETYPE(  arg2, "glGetConvolutionParameteriv - arg2 (params)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

