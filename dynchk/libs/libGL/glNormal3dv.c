// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glNormal3dv
static void(*funcptr) (GLdouble * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void glNormal3dv (GLdouble * arg0 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glNormal3dv");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "glNormal3dv()");
	validate_RWaddress( arg0, "glNormal3dv - arg0");
		validate_NULL_TYPETYPE(  arg0, "glNormal3dv - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

