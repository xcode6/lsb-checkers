// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glColor4ubv
static void(*funcptr) (const GLubyte * ) = 0;

extern int __lsb_check_params;
void glColor4ubv (const GLubyte * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glColor4ubv()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glColor4ubv");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glColor4ubv. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glColor4ubv() - validating");
		validate_Rdaddress( arg0, "glColor4ubv - arg0 (v)");
		validate_NULL_TYPETYPE(  arg0, "glColor4ubv - arg0 (v)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

