// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glGenTextures
static void(*funcptr) (GLsizei , GLuint * ) = 0;

extern int __lsb_check_params;
void glGenTextures (GLsizei arg0 , GLuint * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glGenTextures()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGenTextures");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glGenTextures. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glGenTextures() - validating");
		validate_NULL_TYPETYPE(  arg0, "glGenTextures - arg0 (n)");
		validate_RWaddress( arg1, "glGenTextures - arg1 (textures)");
		validate_NULL_TYPETYPE(  arg1, "glGenTextures - arg1 (textures)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

