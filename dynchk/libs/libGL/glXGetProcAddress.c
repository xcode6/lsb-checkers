// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#include <GL/glx.h>
#undef glXGetProcAddress
static void(*(*funcptr) )(void)(const GLubyte * ) = 0;

extern int __lsb_check_params;
void(* glXGetProcAddress )(void)(const GLubyte * arg0 )
{
	int reset_flag = __lsb_check_params;
	void(* ret_value  )(void);
	__lsb_output(4, "Invoking wrapper for glXGetProcAddress()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glXGetProcAddress");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glXGetProcAddress. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glXGetProcAddress() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "glXGetProcAddress - arg0 (procName)");
		}
		validate_NULL_TYPETYPE(  arg0, "glXGetProcAddress - arg0 (procName)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

