// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef lgammal_r
static long double(*funcptr) (long double , int * ) = 0;

long double lgammal_r (long double arg0 , int * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "lgammal_r");
	validate_NULL_TYPETYPE(  arg0, "lgammal_r");
	validate_Rdaddress( arg1, "lgammal_r");
	validate_NULL_TYPETYPE(  arg1, "lgammal_r");
	return funcptr(arg0, arg1);
}

long double __lsb_lgammal_r (long double arg0 , int * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "lgammal_r");
	return funcptr(arg0, arg1);
}

