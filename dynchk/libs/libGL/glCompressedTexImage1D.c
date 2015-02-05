// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glCompressedTexImage1D
static void(*funcptr) (GLenum , GLint , GLenum , GLsizei , GLint , GLsizei , const GLvoid * ) = 0;

extern int __lsb_check_params;
void glCompressedTexImage1D (GLenum arg0 , GLint arg1 , GLenum arg2 , GLsizei arg3 , GLint arg4 , GLsizei arg5 , const GLvoid * arg6 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glCompressedTexImage1D()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glCompressedTexImage1D");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glCompressedTexImage1D. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glCompressedTexImage1D() - validating");
		validate_NULL_TYPETYPE(  arg0, "glCompressedTexImage1D - arg0 (target)");
		validate_NULL_TYPETYPE(  arg1, "glCompressedTexImage1D - arg1 (level)");
		validate_NULL_TYPETYPE(  arg2, "glCompressedTexImage1D - arg2 (internalformat)");
		validate_NULL_TYPETYPE(  arg3, "glCompressedTexImage1D - arg3 (width)");
		validate_NULL_TYPETYPE(  arg4, "glCompressedTexImage1D - arg4 (border)");
		validate_NULL_TYPETYPE(  arg5, "glCompressedTexImage1D - arg5 (imageSize)");
		if( arg6 ) {
		validate_Rdaddress( arg6, "glCompressedTexImage1D - arg6 (data)");
		}
		validate_NULL_TYPETYPE(  arg6, "glCompressedTexImage1D - arg6 (data)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
}
