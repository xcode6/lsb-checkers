// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glVertex4iv
static void(*funcptr) (const GLint * ) = 0;

extern int __lsb_check_params;
void glVertex4iv (const GLint * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glVertex4iv()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glVertex4iv");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glVertex4iv. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glVertex4iv() - validating");
		validate_Rdaddress( arg0, "glVertex4iv - arg0 (v)");
		validate_NULL_TYPETYPE(  arg0, "glVertex4iv - arg0 (v)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

