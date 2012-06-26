// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glInitNames
static void(*funcptr) () = 0;

extern int __lsb_check_params;
void glInitNames ()
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glInitNames()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glInitNames");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glInitNames. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glInitNames() - validating");
	}
	funcptr();
	__lsb_check_params = reset_flag;
}

