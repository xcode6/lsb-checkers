// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#include <GL/glext.h>
#undef glBindBuffer
static void(*funcptr) (GLenum , GLuint ) = 0;

extern int __lsb_check_params;
void glBindBuffer (GLenum arg0 , GLuint arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glBindBuffer()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glBindBuffer");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glBindBuffer. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glBindBuffer() - validating");
		validate_NULL_TYPETYPE(  arg0, "glBindBuffer - arg0");
		validate_NULL_TYPETYPE(  arg1, "glBindBuffer - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

