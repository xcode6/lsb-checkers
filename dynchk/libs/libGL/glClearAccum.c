// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glClearAccum
static void(*funcptr) (GLfloat , GLfloat , GLfloat , GLfloat ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void glClearAccum (GLfloat arg0 , GLfloat arg1 , GLfloat arg2 , GLfloat arg3 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glClearAccum");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "glClearAccum()");
		validate_NULL_TYPETYPE(  arg0, "glClearAccum - arg0");
		validate_NULL_TYPETYPE(  arg1, "glClearAccum - arg1");
		validate_NULL_TYPETYPE(  arg2, "glClearAccum - arg2");
		validate_NULL_TYPETYPE(  arg3, "glClearAccum - arg3");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

