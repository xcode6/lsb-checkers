// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glConvolutionParameteri
static void(*funcptr) (GLenum , GLenum , GLint ) = 0;

extern int __lsb_check_params;
void glConvolutionParameteri (GLenum arg0 , GLenum arg1 , GLint arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glConvolutionParameteri()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glConvolutionParameteri");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glConvolutionParameteri. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glConvolutionParameteri() - validating");
		validate_NULL_TYPETYPE(  arg0, "glConvolutionParameteri - arg0 (target)");
		validate_NULL_TYPETYPE(  arg1, "glConvolutionParameteri - arg1 (pname)");
		validate_NULL_TYPETYPE(  arg2, "glConvolutionParameteri - arg2 (params)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

