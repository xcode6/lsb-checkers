// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(GLubyte *) = 0;

void glColor3ubv(GLubyte * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glColor3ubv");
	validate_NULL_TYPETYPE(arg0, "glColor3ubv");
	return funcptr(arg0);
}

void __lsb_glColor3ubv(GLubyte * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glColor3ubv");
	return funcptr(arg0);
}

