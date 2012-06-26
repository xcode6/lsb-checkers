// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glClipPlane
static void(*funcptr) (GLenum , const GLdouble * ) = 0;

extern int __lsb_check_params;
void glClipPlane (GLenum arg0 , const GLdouble * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glClipPlane()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glClipPlane");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glClipPlane. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glClipPlane() - validating");
		validate_NULL_TYPETYPE(  arg0, "glClipPlane - arg0 (plane)");
		validate_Rdaddress( arg1, "glClipPlane - arg1 (equation)");
		validate_NULL_TYPETYPE(  arg1, "glClipPlane - arg1 (equation)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

