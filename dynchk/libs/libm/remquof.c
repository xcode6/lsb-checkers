// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef remquof
static float(*funcptr) (float , float , int * ) = 0;

float remquof (float arg0 , float arg1 , int * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "remquof");
	validate_NULL_TYPETYPE(arg0, "remquof");
	validate_NULL_TYPETYPE(arg1, "remquof");
	validate_NULL_TYPETYPE(arg2, "remquof");
	return funcptr(arg0, arg1, arg2);
}

float lsb_remquof (float arg0 , float arg1 , int * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "remquof");
	return funcptr(arg0, arg1, arg2);
}

