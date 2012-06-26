// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glMateriali
static void(*funcptr) (GLenum , GLenum , GLint ) = 0;

extern int __lsb_check_params;
void glMateriali (GLenum arg0 , GLenum arg1 , GLint arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glMateriali()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glMateriali");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glMateriali. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glMateriali() - validating");
		validate_NULL_TYPETYPE(  arg0, "glMateriali - arg0 (face)");
		validate_NULL_TYPETYPE(  arg1, "glMateriali - arg1 (pname)");
		validate_NULL_TYPETYPE(  arg2, "glMateriali - arg2 (param)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

