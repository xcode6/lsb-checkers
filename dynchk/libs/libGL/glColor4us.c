// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glColor4us
static void(*funcptr) (GLushort , GLushort , GLushort , GLushort ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void glColor4us (GLushort arg0 , GLushort arg1 , GLushort arg2 , GLushort arg3 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glColor4us");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "glColor4us()");
		validate_NULL_TYPETYPE(  arg0, "glColor4us - arg0");
		validate_NULL_TYPETYPE(  arg1, "glColor4us - arg1");
		validate_NULL_TYPETYPE(  arg2, "glColor4us - arg2");
		validate_NULL_TYPETYPE(  arg3, "glColor4us - arg3");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

