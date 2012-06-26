// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#include <GL/glext.h>
#undef glIsProgram
static GLboolean(*funcptr) (GLuint ) = 0;

extern int __lsb_check_params;
GLboolean glIsProgram (GLuint arg0 )
{
	int reset_flag = __lsb_check_params;
	GLboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for glIsProgram()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glIsProgram");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glIsProgram. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glIsProgram() - validating");
		validate_NULL_TYPETYPE(  arg0, "glIsProgram - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

