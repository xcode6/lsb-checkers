// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glRectdv
static void(*funcptr) (GLdouble * , GLdouble * ) = 0;

extern int __lsb_check_params;
void glRectdv (GLdouble * arg0 , GLdouble * arg1 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " glRectdv ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "glRectdv()");
		validate_RWaddress( arg0, "glRectdv - arg0");
		validate_NULL_TYPETYPE(  arg0, "glRectdv - arg0");
		validate_RWaddress( arg1, "glRectdv - arg1");
		validate_NULL_TYPETYPE(  arg1, "glRectdv - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

