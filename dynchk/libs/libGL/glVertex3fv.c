// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(GLfloat *) = 0;

void glVertex3fv(GLfloat * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glVertex3fv");
	validate_NULL_TYPETYPE(arg0, "glVertex3fv");
	return funcptr(arg0);
}

void __lsb_glVertex3fv(GLfloat * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glVertex3fv");
	return funcptr(arg0);
}

