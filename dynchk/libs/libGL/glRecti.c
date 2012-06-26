// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glRecti
static void(*funcptr) (GLint , GLint , GLint , GLint ) = 0;

extern int __lsb_check_params;
void glRecti (GLint arg0 , GLint arg1 , GLint arg2 , GLint arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glRecti()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glRecti");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glRecti. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glRecti() - validating");
		validate_NULL_TYPETYPE(  arg0, "glRecti - arg0 (x1)");
		validate_NULL_TYPETYPE(  arg1, "glRecti - arg1 (y1)");
		validate_NULL_TYPETYPE(  arg2, "glRecti - arg2 (x2)");
		validate_NULL_TYPETYPE(  arg3, "glRecti - arg3 (y2)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

