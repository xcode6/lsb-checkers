// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glColor4b
static void(*funcptr) (GLbyte , GLbyte , GLbyte , GLbyte ) = 0;

extern int __lsb_check_params;
void glColor4b (GLbyte arg0 , GLbyte arg1 , GLbyte arg2 , GLbyte arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glColor4b()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glColor4b");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glColor4b. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glColor4b() - validating");
		validate_NULL_TYPETYPE(  arg0, "glColor4b - arg0 (red)");
		validate_NULL_TYPETYPE(  arg1, "glColor4b - arg1 (green)");
		validate_NULL_TYPETYPE(  arg2, "glColor4b - arg2 (blue)");
		validate_NULL_TYPETYPE(  arg3, "glColor4b - arg3 (alpha)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

