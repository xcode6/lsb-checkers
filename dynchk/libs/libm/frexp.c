// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef frexp
static double(*funcptr) (double , int * ) = 0;

double frexp (double arg0 , int * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "frexp");
	validate_NULL_TYPETYPE(  arg0, "frexp");
	validate_Rdaddress( arg1, "frexp");
	validate_NULL_TYPETYPE(  arg1, "frexp");
	return funcptr(arg0, arg1);
}

double __lsb_frexp (double arg0 , int * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "frexp");
	return funcptr(arg0, arg1);
}

