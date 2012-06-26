// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glMultiTexCoord3s
static void(*funcptr) (GLenum , GLshort , GLshort , GLshort ) = 0;

extern int __lsb_check_params;
void glMultiTexCoord3s (GLenum arg0 , GLshort arg1 , GLshort arg2 , GLshort arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glMultiTexCoord3s()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glMultiTexCoord3s");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glMultiTexCoord3s. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glMultiTexCoord3s() - validating");
		validate_NULL_TYPETYPE(  arg0, "glMultiTexCoord3s - arg0 (target)");
		validate_NULL_TYPETYPE(  arg1, "glMultiTexCoord3s - arg1 (s)");
		validate_NULL_TYPETYPE(  arg2, "glMultiTexCoord3s - arg2 (t)");
		validate_NULL_TYPETYPE(  arg3, "glMultiTexCoord3s - arg3 (r)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

