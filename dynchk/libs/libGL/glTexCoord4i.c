// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glTexCoord4i
static void(*funcptr) (GLint , GLint , GLint , GLint ) = 0;

extern int __lsb_check_params;
void glTexCoord4i (GLint arg0 , GLint arg1 , GLint arg2 , GLint arg3 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " glTexCoord4i ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "glTexCoord4i()");
		validate_NULL_TYPETYPE(  arg0, "glTexCoord4i - arg0");
		validate_NULL_TYPETYPE(  arg1, "glTexCoord4i - arg1");
		validate_NULL_TYPETYPE(  arg2, "glTexCoord4i - arg2");
		validate_NULL_TYPETYPE(  arg3, "glTexCoord4i - arg3");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

