// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <complex.h>
#undef cpow
static double complex(*funcptr) (double complex , double complex ) = 0;

double complex cpow (double complex arg0 , double complex arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cpow");
	validate_NULL_TYPETYPE(  arg0, "cpow");
	validate_NULL_TYPETYPE(  arg1, "cpow");
	return funcptr(arg0, arg1);
}

double complex __lsb_cpow (double complex arg0 , double complex arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cpow");
	return funcptr(arg0, arg1);
}

