// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(GLshort *) = 0;

void glRasterPos2sv(GLshort * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glRasterPos2sv");
	validate_NULL_TYPETYPE(arg0, "glRasterPos2sv");
	return funcptr(arg0);
}

void __lsb_glRasterPos2sv(GLshort * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glRasterPos2sv");
	return funcptr(arg0);
}

