// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glCompressedTexSubImage2D
static void(*funcptr) (GLenum , GLint , GLint , GLint , GLsizei , GLsizei , GLenum , GLsizei , const GLvoid * ) = 0;

extern int __lsb_check_params;
void glCompressedTexSubImage2D (GLenum arg0 , GLint arg1 , GLint arg2 , GLint arg3 , GLsizei arg4 , GLsizei arg5 , GLenum arg6 , GLsizei arg7 , const GLvoid * arg8 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glCompressedTexSubImage2D()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glCompressedTexSubImage2D");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glCompressedTexSubImage2D. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glCompressedTexSubImage2D() - validating");
		validate_NULL_TYPETYPE(  arg0, "glCompressedTexSubImage2D - arg0 (target)");
		validate_NULL_TYPETYPE(  arg1, "glCompressedTexSubImage2D - arg1 (level)");
		validate_NULL_TYPETYPE(  arg2, "glCompressedTexSubImage2D - arg2 (xoffset)");
		validate_NULL_TYPETYPE(  arg3, "glCompressedTexSubImage2D - arg3 (yoffset)");
		validate_NULL_TYPETYPE(  arg4, "glCompressedTexSubImage2D - arg4 (width)");
		validate_NULL_TYPETYPE(  arg5, "glCompressedTexSubImage2D - arg5 (height)");
		validate_NULL_TYPETYPE(  arg6, "glCompressedTexSubImage2D - arg6 (format)");
		validate_NULL_TYPETYPE(  arg7, "glCompressedTexSubImage2D - arg7 (imageSize)");
		if( arg8 ) {
		validate_Rdaddress( arg8, "glCompressedTexSubImage2D - arg8 (data)");
		}
		validate_NULL_TYPETYPE(  arg8, "glCompressedTexSubImage2D - arg8 (data)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
	__lsb_check_params = reset_flag;
}
