// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(GLushort *) = 0;

void glColor4usv(GLushort * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glColor4usv");
	validate_NULL_TYPETYPE(arg0, "glColor4usv");
	return funcptr(arg0);
}

void __lsb_glColor4usv(GLushort * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glColor4usv");
	return funcptr(arg0);
}

