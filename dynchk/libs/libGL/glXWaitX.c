// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/glx.h>
#undef glXWaitX
static void(*funcptr) () = 0;

extern int __lsb_check_params;
void glXWaitX ()
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glXWaitX()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glXWaitX");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glXWaitX. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glXWaitX() - validating");
	}
	funcptr();
	__lsb_check_params = reset_flag;
}

