// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(GLint *, GLint *) = 0;

void glRectiv(GLint * arg0, GLint * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glRectiv");
	validate_NULL_TYPETYPE(arg0, "glRectiv");
	validate_NULL_TYPETYPE(arg1, "glRectiv");
	return funcptr(arg0, arg1);
}

void __lsb_glRectiv(GLint * arg0, GLint * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glRectiv");
	return funcptr(arg0, arg1);
}

