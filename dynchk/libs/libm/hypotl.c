// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef hypotl
static long double(*funcptr) (long double , long double ) = 0;

long double hypotl (long double arg0 , long double arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "hypotl");
	validate_NULL_TYPETYPE(  arg0, "hypotl");
	validate_NULL_TYPETYPE(  arg1, "hypotl");
	return funcptr(arg0, arg1);
}

long double __lsb_hypotl (long double arg0 , long double arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "hypotl");
	return funcptr(arg0, arg1);
}

