// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glVertex3dv
static void(*funcptr) (GLdouble * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void glVertex3dv (GLdouble * arg0 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glVertex3dv");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "glVertex3dv()");
	validate_RWaddress( arg0, "glVertex3dv - arg0");
		validate_NULL_TYPETYPE(  arg0, "glVertex3dv - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

