// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glColor4usv
static void(*funcptr) (GLushort * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void glColor4usv (GLushort * arg0 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glColor4usv");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "glColor4usv()");
	validate_RWaddress( arg0, "glColor4usv - arg0");
		validate_NULL_TYPETYPE(  arg0, "glColor4usv - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

