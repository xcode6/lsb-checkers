// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#include <GL/glext.h>
#undef glUniformMatrix2fv
static void(*funcptr) (GLint , GLsizei , GLboolean , const GLfloat * ) = 0;

extern int __lsb_check_params;
void glUniformMatrix2fv (GLint arg0 , GLsizei arg1 , GLboolean arg2 , const GLfloat * arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glUniformMatrix2fv()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glUniformMatrix2fv");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glUniformMatrix2fv. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glUniformMatrix2fv() - validating");
		validate_NULL_TYPETYPE(  arg0, "glUniformMatrix2fv - arg0");
		validate_NULL_TYPETYPE(  arg1, "glUniformMatrix2fv - arg1");
		validate_NULL_TYPETYPE(  arg2, "glUniformMatrix2fv - arg2");
		if( arg3 ) {
		validate_Rdaddress( arg3, "glUniformMatrix2fv - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "glUniformMatrix2fv - arg3");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

