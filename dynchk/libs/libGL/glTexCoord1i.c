// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glTexCoord1i
static void(*funcptr) (GLint ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void glTexCoord1i (GLint arg0 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glTexCoord1i");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "glTexCoord1i()");
		validate_NULL_TYPETYPE(  arg0, "glTexCoord1i - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

