// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef __isinf
static int(*funcptr) (double ) = 0;

int __isinf (double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__isinf");
	validate_NULL_TYPETYPE(arg0, "__isinf");
	return funcptr(arg0);
}

int lsb___isinf (double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__isinf");
	return funcptr(arg0);
}

