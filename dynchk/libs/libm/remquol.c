// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef remquol
static long double(*funcptr) (long double , long double , int * ) = 0;

long double remquol (long double arg0 , long double arg1 , int * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "remquol");
	validate_NULL_TYPETYPE(  arg0, "remquol");
	validate_NULL_TYPETYPE(  arg1, "remquol");
	validate_Rdaddress( arg2, "remquol");
	validate_NULL_TYPETYPE(  arg2, "remquol");
	return funcptr(arg0, arg1, arg2);
}

long double __lsb_remquol (long double arg0 , long double arg1 , int * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "remquol");
	return funcptr(arg0, arg1, arg2);
}

