// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glLineStipple
static void(*funcptr) (GLint , GLushort ) = 0;

extern int __lsb_check_params;
void glLineStipple (GLint arg0 , GLushort arg1 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " glLineStipple ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "glLineStipple()");
		validate_NULL_TYPETYPE(  arg0, "glLineStipple - arg0");
		validate_NULL_TYPETYPE(  arg1, "glLineStipple - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

