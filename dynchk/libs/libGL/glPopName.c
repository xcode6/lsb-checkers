// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glPopName
static void(*funcptr) () = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void glPopName ()
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glPopName");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "glPopName()");
	}
	funcptr();
	__lsb_check_params = reset_flag;
}

