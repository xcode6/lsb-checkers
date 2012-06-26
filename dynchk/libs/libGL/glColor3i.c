// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glColor3i
static void(*funcptr) (GLint , GLint , GLint ) = 0;

extern int __lsb_check_params;
void glColor3i (GLint arg0 , GLint arg1 , GLint arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glColor3i()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glColor3i");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glColor3i. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glColor3i() - validating");
		validate_NULL_TYPETYPE(  arg0, "glColor3i - arg0 (red)");
		validate_NULL_TYPETYPE(  arg1, "glColor3i - arg1 (green)");
		validate_NULL_TYPETYPE(  arg2, "glColor3i - arg2 (blue)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

