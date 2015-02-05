// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#include <GL/glext.h>
#undef glUniform2fv
static void(*funcptr) (GLint , GLsizei , const GLfloat * ) = 0;

extern int __lsb_check_params;
void glUniform2fv (GLint arg0 , GLsizei arg1 , const GLfloat * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glUniform2fv()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glUniform2fv");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glUniform2fv. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glUniform2fv() - validating");
		validate_NULL_TYPETYPE(  arg0, "glUniform2fv - arg0");
		validate_NULL_TYPETYPE(  arg1, "glUniform2fv - arg1");
		if( arg2 ) {
		validate_Rdaddress( arg2, "glUniform2fv - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "glUniform2fv - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}
