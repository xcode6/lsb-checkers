// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glRasterPos2iv
static void(*funcptr) (GLint * ) = 0;

extern int __lsb_check_params;
void glRasterPos2iv (GLint * arg0 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " glRasterPos2iv ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "glRasterPos2iv()");
		validate_RWaddress( arg0, "glRasterPos2iv - arg0");
		validate_NULL_TYPETYPE(  arg0, "glRasterPos2iv - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

