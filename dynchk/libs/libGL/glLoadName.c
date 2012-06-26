// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glLoadName
static void(*funcptr) (GLuint ) = 0;

extern int __lsb_check_params;
void glLoadName (GLuint arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glLoadName()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glLoadName");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glLoadName. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glLoadName() - validating");
		validate_NULL_TYPETYPE(  arg0, "glLoadName - arg0 (name)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

