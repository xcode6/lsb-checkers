// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glRecti
static void(*funcptr) (GLint , GLint , GLint , GLint ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void glRecti (GLint arg0 , GLint arg1 , GLint arg2 , GLint arg3 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glRecti");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "glRecti()");
		validate_NULL_TYPETYPE(  arg0, "glRecti - arg0");
		validate_NULL_TYPETYPE(  arg1, "glRecti - arg1");
		validate_NULL_TYPETYPE(  arg2, "glRecti - arg2");
		validate_NULL_TYPETYPE(  arg3, "glRecti - arg3");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

