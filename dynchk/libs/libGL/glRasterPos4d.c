// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glRasterPos4d
static void(*funcptr) (GLdouble , GLdouble , GLdouble , GLdouble ) = 0;

extern int __lsb_check_params;
void glRasterPos4d (GLdouble arg0 , GLdouble arg1 , GLdouble arg2 , GLdouble arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glRasterPos4d()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glRasterPos4d");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glRasterPos4d. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glRasterPos4d() - validating");
		validate_NULL_TYPETYPE(  arg0, "glRasterPos4d - arg0 (x)");
		validate_NULL_TYPETYPE(  arg1, "glRasterPos4d - arg1 (y)");
		validate_NULL_TYPETYPE(  arg2, "glRasterPos4d - arg2 (z)");
		validate_NULL_TYPETYPE(  arg3, "glRasterPos4d - arg3 (w)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

