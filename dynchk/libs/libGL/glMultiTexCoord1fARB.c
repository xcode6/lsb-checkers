// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glMultiTexCoord1fARB
static void(*funcptr) (GLenum , GLfloat ) = 0;

extern int __lsb_check_params;
void glMultiTexCoord1fARB (GLenum arg0 , GLfloat arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glMultiTexCoord1fARB()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glMultiTexCoord1fARB");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glMultiTexCoord1fARB. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glMultiTexCoord1fARB() - validating");
		validate_NULL_TYPETYPE(  arg0, "glMultiTexCoord1fARB - arg0 (target)");
		validate_NULL_TYPETYPE(  arg1, "glMultiTexCoord1fARB - arg1 (s)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

