// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glGetMapiv
static void(*funcptr) (GLenum , GLenum , GLint * ) = 0;

extern int __lsb_check_params;
void glGetMapiv (GLenum arg0 , GLenum arg1 , GLint * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glGetMapiv()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGetMapiv");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glGetMapiv. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glGetMapiv() - validating");
		validate_NULL_TYPETYPE(  arg0, "glGetMapiv - arg0 (target)");
		validate_NULL_TYPETYPE(  arg1, "glGetMapiv - arg1 (query)");
		validate_RWaddress( arg2, "glGetMapiv - arg2 (v)");
		validate_NULL_TYPETYPE(  arg2, "glGetMapiv - arg2 (v)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

