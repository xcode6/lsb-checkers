// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glVertex3d
static void(*funcptr) (GLdouble , GLdouble , GLdouble ) = 0;

extern int __lsb_check_params;
void glVertex3d (GLdouble arg0 , GLdouble arg1 , GLdouble arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glVertex3d()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glVertex3d");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glVertex3d. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glVertex3d() - validating");
		validate_NULL_TYPETYPE(  arg0, "glVertex3d - arg0 (x)");
		validate_NULL_TYPETYPE(  arg1, "glVertex3d - arg1 (y)");
		validate_NULL_TYPETYPE(  arg2, "glVertex3d - arg2 (z)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

