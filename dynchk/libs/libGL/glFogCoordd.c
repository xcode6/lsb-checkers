// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#include <GL/glext.h>
#undef glFogCoordd
static void(*funcptr) (GLdouble ) = 0;

extern int __lsb_check_params;
void glFogCoordd (GLdouble arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glFogCoordd()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glFogCoordd");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glFogCoordd. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glFogCoordd() - validating");
		validate_NULL_TYPETYPE(  arg0, "glFogCoordd - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

