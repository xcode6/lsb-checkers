// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glMultiTexCoord3i
static void(*funcptr) (GLenum , GLint , GLint , GLint ) = 0;

extern int __lsb_check_params;
void glMultiTexCoord3i (GLenum arg0 , GLint arg1 , GLint arg2 , GLint arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glMultiTexCoord3i()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glMultiTexCoord3i");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glMultiTexCoord3i. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glMultiTexCoord3i() - validating");
		validate_NULL_TYPETYPE(  arg0, "glMultiTexCoord3i - arg0 (target)");
		validate_NULL_TYPETYPE(  arg1, "glMultiTexCoord3i - arg1 (s)");
		validate_NULL_TYPETYPE(  arg2, "glMultiTexCoord3i - arg2 (t)");
		validate_NULL_TYPETYPE(  arg3, "glMultiTexCoord3i - arg3 (r)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

