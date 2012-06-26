// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glTexCoord4s
static void(*funcptr) (GLshort , GLshort , GLshort , GLshort ) = 0;

extern int __lsb_check_params;
void glTexCoord4s (GLshort arg0 , GLshort arg1 , GLshort arg2 , GLshort arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glTexCoord4s()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glTexCoord4s");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glTexCoord4s. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glTexCoord4s() - validating");
		validate_NULL_TYPETYPE(  arg0, "glTexCoord4s - arg0 (s)");
		validate_NULL_TYPETYPE(  arg1, "glTexCoord4s - arg1 (t)");
		validate_NULL_TYPETYPE(  arg2, "glTexCoord4s - arg2 (r)");
		validate_NULL_TYPETYPE(  arg3, "glTexCoord4s - arg3 (q)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

