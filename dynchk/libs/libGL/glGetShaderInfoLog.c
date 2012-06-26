// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#include <GL/glext.h>
#undef glGetShaderInfoLog
static void(*funcptr) (GLuint , GLsizei , GLsizei * , GLchar * ) = 0;

extern int __lsb_check_params;
void glGetShaderInfoLog (GLuint arg0 , GLsizei arg1 , GLsizei * arg2 , GLchar * arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glGetShaderInfoLog()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGetShaderInfoLog");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glGetShaderInfoLog. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glGetShaderInfoLog() - validating");
		validate_NULL_TYPETYPE(  arg0, "glGetShaderInfoLog - arg0");
		validate_NULL_TYPETYPE(  arg1, "glGetShaderInfoLog - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "glGetShaderInfoLog - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "glGetShaderInfoLog - arg2");
		if( arg3 ) {
		validate_RWaddress( arg3, "glGetShaderInfoLog - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "glGetShaderInfoLog - arg3");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

