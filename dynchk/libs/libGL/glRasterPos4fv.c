// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glRasterPos4fv
static void(*funcptr) (const GLfloat * ) = 0;

extern int __lsb_check_params;
void glRasterPos4fv (const GLfloat * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glRasterPos4fv()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glRasterPos4fv");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glRasterPos4fv. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glRasterPos4fv() - validating");
		validate_Rdaddress( arg0, "glRasterPos4fv - arg0 (v)");
		validate_NULL_TYPETYPE(  arg0, "glRasterPos4fv - arg0 (v)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

