// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glHistogram
static void(*funcptr) (GLenum , GLsizei , GLenum , GLboolean ) = 0;

extern int __lsb_check_params;
void glHistogram (GLenum arg0 , GLsizei arg1 , GLenum arg2 , GLboolean arg3 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " glHistogram ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "glHistogram()");
		validate_NULL_TYPETYPE(  arg0, "glHistogram - arg0");
		validate_NULL_TYPETYPE(  arg1, "glHistogram - arg1");
		validate_NULL_TYPETYPE(  arg2, "glHistogram - arg2");
		validate_NULL_TYPETYPE(  arg3, "glHistogram - arg3");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

