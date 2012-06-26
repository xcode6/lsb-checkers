// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glDisableClientState
static void(*funcptr) (GLenum ) = 0;

extern int __lsb_check_params;
void glDisableClientState (GLenum arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glDisableClientState()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glDisableClientState");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glDisableClientState. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glDisableClientState() - validating");
		validate_NULL_TYPETYPE(  arg0, "glDisableClientState - arg0 (array)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

