// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glPixelStorei
static void(*funcptr) (GLenum , GLint ) = 0;

extern int __lsb_check_params;
void glPixelStorei (GLenum arg0 , GLint arg1 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " glPixelStorei ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "glPixelStorei()");
		validate_NULL_TYPETYPE(  arg0, "glPixelStorei - arg0");
		validate_NULL_TYPETYPE(  arg1, "glPixelStorei - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

