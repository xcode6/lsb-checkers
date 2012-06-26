// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glIndexubv
static void(*funcptr) (const GLubyte * ) = 0;

extern int __lsb_check_params;
void glIndexubv (const GLubyte * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glIndexubv()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glIndexubv");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glIndexubv. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glIndexubv() - validating");
		validate_Rdaddress( arg0, "glIndexubv - arg0 (c)");
		validate_NULL_TYPETYPE(  arg0, "glIndexubv - arg0 (c)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

