// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glClearStencil
static void(*funcptr) (GLint ) = 0;

extern int __lsb_check_params;
void glClearStencil (GLint arg0 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " glClearStencil ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "glClearStencil()");
		validate_NULL_TYPETYPE(  arg0, "glClearStencil - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

