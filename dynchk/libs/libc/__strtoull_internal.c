// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdlib.h>
#undef __strtoull_internal
static unsigned long long(*funcptr) (const char * , char * * , int , int ) = 0;

unsigned long long __strtoull_internal (const char * arg0 , char * * arg1 , int arg2 , int arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__strtoull_internal");
	validate_NULL_TYPETYPE(arg0, "__strtoull_internal");
	validate_RWaddress(arg1, "__strtoull_internal");
	validate_NULL_TYPETYPE(arg2, "__strtoull_internal");
	validate_NULL_TYPETYPE(arg3, "__strtoull_internal");
	return funcptr(arg0, arg1, arg2, arg3);
}

unsigned long long lsb___strtoull_internal (const char * arg0 , char * * arg1 , int arg2 , int arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__strtoull_internal");
	return funcptr(arg0, arg1, arg2, arg3);
}

