// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glGetString
static GLubyte *(*funcptr) (GLenum ) = 0;

extern int __lsb_check_params;
GLubyte * glGetString (GLenum arg0 )
{
	int reset_flag = __lsb_check_params;
	GLubyte * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " glGetString ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "glGetString()");
		validate_NULL_TYPETYPE(  arg0, "glGetString - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

