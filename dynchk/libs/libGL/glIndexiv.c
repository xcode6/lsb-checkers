// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(GLint *) = 0;

void glIndexiv(GLint * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glIndexiv");
	validate_NULL_TYPETYPE(arg0, "glIndexiv");
	return funcptr(arg0);
}

void __lsb_glIndexiv(GLint * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glIndexiv");
	return funcptr(arg0);
}

