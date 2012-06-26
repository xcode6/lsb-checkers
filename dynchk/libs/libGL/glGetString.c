// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glGetString
static const GLubyte *(*funcptr) (GLenum ) = 0;

extern int __lsb_check_params;
const GLubyte * glGetString (GLenum arg0 )
{
	int reset_flag = __lsb_check_params;
	const GLubyte * ret_value  ;
	__lsb_output(4, "Invoking wrapper for glGetString()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGetString");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glGetString. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glGetString() - validating");
		validate_NULL_TYPETYPE(  arg0, "glGetString - arg0 (name)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

