// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glCopyTexSubImage2D
static void(*funcptr) (GLenum , GLint , GLint , GLint , GLint , GLint , GLsizei , GLsizei ) = 0;

extern int __lsb_check_params;
void glCopyTexSubImage2D (GLenum arg0 , GLint arg1 , GLint arg2 , GLint arg3 , GLint arg4 , GLint arg5 , GLsizei arg6 , GLsizei arg7 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glCopyTexSubImage2D()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glCopyTexSubImage2D");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glCopyTexSubImage2D. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glCopyTexSubImage2D() - validating");
		validate_NULL_TYPETYPE(  arg0, "glCopyTexSubImage2D - arg0 (target)");
		validate_NULL_TYPETYPE(  arg1, "glCopyTexSubImage2D - arg1 (level)");
		validate_NULL_TYPETYPE(  arg2, "glCopyTexSubImage2D - arg2 (xoffset)");
		validate_NULL_TYPETYPE(  arg3, "glCopyTexSubImage2D - arg3 (yoffset)");
		validate_NULL_TYPETYPE(  arg4, "glCopyTexSubImage2D - arg4 (x)");
		validate_NULL_TYPETYPE(  arg5, "glCopyTexSubImage2D - arg5 (y)");
		validate_NULL_TYPETYPE(  arg6, "glCopyTexSubImage2D - arg6 (width)");
		validate_NULL_TYPETYPE(  arg7, "glCopyTexSubImage2D - arg7 (height)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
	__lsb_check_params = reset_flag;
}

