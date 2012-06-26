// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glCopyTexImage1D
static void(*funcptr) (GLenum , GLint , GLenum , GLint , GLint , GLsizei , GLint ) = 0;

extern int __lsb_check_params;
void glCopyTexImage1D (GLenum arg0 , GLint arg1 , GLenum arg2 , GLint arg3 , GLint arg4 , GLsizei arg5 , GLint arg6 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glCopyTexImage1D()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glCopyTexImage1D");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glCopyTexImage1D. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glCopyTexImage1D() - validating");
		validate_NULL_TYPETYPE(  arg0, "glCopyTexImage1D - arg0 (target)");
		validate_NULL_TYPETYPE(  arg1, "glCopyTexImage1D - arg1 (level)");
		validate_NULL_TYPETYPE(  arg2, "glCopyTexImage1D - arg2 (internalFormat)");
		validate_NULL_TYPETYPE(  arg3, "glCopyTexImage1D - arg3 (x)");
		validate_NULL_TYPETYPE(  arg4, "glCopyTexImage1D - arg4 (y)");
		validate_NULL_TYPETYPE(  arg5, "glCopyTexImage1D - arg5 (width)");
		validate_NULL_TYPETYPE(  arg6, "glCopyTexImage1D - arg6 (border)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
}

