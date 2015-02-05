// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#include <GL/glext.h>
#undef glGetShaderSource
static void(*funcptr) (GLuint , GLsizei , GLsizei * , GLchar * ) = 0;

extern int __lsb_check_params;
void glGetShaderSource (GLuint arg0 , GLsizei arg1 , GLsizei * arg2 , GLchar * arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glGetShaderSource()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGetShaderSource");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glGetShaderSource. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glGetShaderSource() - validating");
		validate_NULL_TYPETYPE(  arg0, "glGetShaderSource - arg0");
		validate_NULL_TYPETYPE(  arg1, "glGetShaderSource - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "glGetShaderSource - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "glGetShaderSource - arg2");
		if( arg3 ) {
		validate_RWaddress( arg3, "glGetShaderSource - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "glGetShaderSource - arg3");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}
