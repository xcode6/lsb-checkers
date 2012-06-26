// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glVertex2d
static void(*funcptr) (GLdouble , GLdouble ) = 0;

extern int __lsb_check_params;
void glVertex2d (GLdouble arg0 , GLdouble arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glVertex2d()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glVertex2d");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glVertex2d. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glVertex2d() - validating");
		validate_NULL_TYPETYPE(  arg0, "glVertex2d - arg0 (x)");
		validate_NULL_TYPETYPE(  arg1, "glVertex2d - arg1 (y)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

