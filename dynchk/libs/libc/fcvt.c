// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdlib.h>
#undef fcvt
static char *(*funcptr) (double , int , int * , int * ) = 0;

char * fcvt (double arg0 , int arg1 , int * arg2 , int * arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fcvt");
	validate_NULL_TYPETYPE(  arg0, "fcvt");
	validate_NULL_TYPETYPE(  arg1, "fcvt");
	validate_Rdaddress( arg2, "fcvt");
	validate_NULL_TYPETYPE(  arg2, "fcvt");
	validate_Rdaddress( arg3, "fcvt");
	validate_NULL_TYPETYPE(  arg3, "fcvt");
	return funcptr(arg0, arg1, arg2, arg3);
}

char * __lsb_fcvt (double arg0 , int arg1 , int * arg2 , int * arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fcvt");
	return funcptr(arg0, arg1, arg2, arg3);
}

