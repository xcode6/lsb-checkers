// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef yn
static double(*funcptr) (int , double ) = 0;

double yn (int arg0 , double arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "yn");
	validate_NULL_TYPETYPE(  arg0, "yn");
	validate_NULL_TYPETYPE(  arg1, "yn");
	return funcptr(arg0, arg1);
}

double __lsb_yn (int arg0 , double arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "yn");
	return funcptr(arg0, arg1);
}

