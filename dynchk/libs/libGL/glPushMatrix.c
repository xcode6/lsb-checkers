// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(void) = 0;

void glPushMatrix(void arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glPushMatrix");
	validate_NULL_TYPETYPE(arg0, "glPushMatrix");
	return funcptr(arg0);
}

void __lsb_glPushMatrix(void arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glPushMatrix");
	return funcptr(arg0);
}

