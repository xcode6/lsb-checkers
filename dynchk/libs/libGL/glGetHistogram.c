// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glGetHistogram
static void(*funcptr) (GLenum , GLboolean , GLenum , GLenum , GLvoid * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void glGetHistogram (GLenum arg0 , GLboolean arg1 , GLenum arg2 , GLenum arg3 , GLvoid * arg4 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGetHistogram");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "glGetHistogram()");
		validate_NULL_TYPETYPE(  arg0, "glGetHistogram - arg0");
		validate_NULL_TYPETYPE(  arg1, "glGetHistogram - arg1");
		validate_NULL_TYPETYPE(  arg2, "glGetHistogram - arg2");
		validate_NULL_TYPETYPE(  arg3, "glGetHistogram - arg3");
	validate_RWaddress( arg4, "glGetHistogram - arg4");
		validate_NULL_TYPETYPE(  arg4, "glGetHistogram - arg4");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

