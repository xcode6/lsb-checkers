// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(GLfloat *) = 0;

void glColor4fv(GLfloat * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glColor4fv");
	validate_NULL_TYPETYPE(arg0, "glColor4fv");
	return funcptr(arg0);
}

void __lsb_glColor4fv(GLfloat * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glColor4fv");
	return funcptr(arg0);
}

