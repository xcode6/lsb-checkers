// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glMultiTexCoord4f
static void(*funcptr) (GLenum , GLfloat , GLfloat , GLfloat , GLfloat ) = 0;

extern int __lsb_check_params;
void glMultiTexCoord4f (GLenum arg0 , GLfloat arg1 , GLfloat arg2 , GLfloat arg3 , GLfloat arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glMultiTexCoord4f()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glMultiTexCoord4f");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glMultiTexCoord4f. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glMultiTexCoord4f() - validating");
		validate_NULL_TYPETYPE(  arg0, "glMultiTexCoord4f - arg0 (target)");
		validate_NULL_TYPETYPE(  arg1, "glMultiTexCoord4f - arg1 (s)");
		validate_NULL_TYPETYPE(  arg2, "glMultiTexCoord4f - arg2 (t)");
		validate_NULL_TYPETYPE(  arg3, "glMultiTexCoord4f - arg3 (r)");
		validate_NULL_TYPETYPE(  arg4, "glMultiTexCoord4f - arg4 (q)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

