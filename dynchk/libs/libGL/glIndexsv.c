// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(GLshort *) = 0;

void glIndexsv(GLshort * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glIndexsv");
	validate_NULL_TYPETYPE(arg0, "glIndexsv");
	return funcptr(arg0);
}

void __lsb_glIndexsv(GLshort * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glIndexsv");
	return funcptr(arg0);
}

