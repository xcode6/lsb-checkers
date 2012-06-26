// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glMultiTexCoord2i
static void(*funcptr) (GLenum , GLint , GLint ) = 0;

extern int __lsb_check_params;
void glMultiTexCoord2i (GLenum arg0 , GLint arg1 , GLint arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glMultiTexCoord2i()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glMultiTexCoord2i");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glMultiTexCoord2i. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glMultiTexCoord2i() - validating");
		validate_NULL_TYPETYPE(  arg0, "glMultiTexCoord2i - arg0 (target)");
		validate_NULL_TYPETYPE(  arg1, "glMultiTexCoord2i - arg1 (s)");
		validate_NULL_TYPETYPE(  arg2, "glMultiTexCoord2i - arg2 (t)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

