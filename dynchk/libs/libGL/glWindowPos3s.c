// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#include <GL/glext.h>
#undef glWindowPos3s
static void(*funcptr) (GLshort , GLshort , GLshort ) = 0;

extern int __lsb_check_params;
void glWindowPos3s (GLshort arg0 , GLshort arg1 , GLshort arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glWindowPos3s()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glWindowPos3s");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glWindowPos3s. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glWindowPos3s() - validating");
		validate_NULL_TYPETYPE(  arg0, "glWindowPos3s - arg0");
		validate_NULL_TYPETYPE(  arg1, "glWindowPos3s - arg1");
		validate_NULL_TYPETYPE(  arg2, "glWindowPos3s - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}
