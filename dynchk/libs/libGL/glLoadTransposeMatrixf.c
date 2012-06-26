// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glLoadTransposeMatrixf
static void(*funcptr) (const GLfloat * ) = 0;

extern int __lsb_check_params;
void glLoadTransposeMatrixf (const GLfloat * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glLoadTransposeMatrixf()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glLoadTransposeMatrixf");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glLoadTransposeMatrixf. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glLoadTransposeMatrixf() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "glLoadTransposeMatrixf - arg0 (m)");
		}
		validate_NULL_TYPETYPE(  arg0, "glLoadTransposeMatrixf - arg0 (m)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

