// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#include <GL/glext.h>
#undef glVertexAttrib2f
static void(*funcptr) (GLuint , GLfloat , GLfloat ) = 0;

extern int __lsb_check_params;
void glVertexAttrib2f (GLuint arg0 , GLfloat arg1 , GLfloat arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glVertexAttrib2f()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glVertexAttrib2f");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glVertexAttrib2f. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glVertexAttrib2f() - validating");
		validate_NULL_TYPETYPE(  arg0, "glVertexAttrib2f - arg0");
		validate_NULL_TYPETYPE(  arg1, "glVertexAttrib2f - arg1");
		validate_NULL_TYPETYPE(  arg2, "glVertexAttrib2f - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

