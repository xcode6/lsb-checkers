// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <string.h>
#undef stpncpy
static char *(*funcptr) (char * , const char * , size_t ) = 0;

char * stpncpy (char * arg0 , const char * arg1 , size_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "stpncpy");
	validate_NULL_TYPETYPE(arg0, "stpncpy");
	validate_NULL_TYPETYPE(arg1, "stpncpy");
	validate_NULL_TYPETYPE(arg2, "stpncpy");
	return funcptr(arg0, arg1, arg2);
}

char * lsb_stpncpy (char * arg0 , const char * arg1 , size_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "stpncpy");
	return funcptr(arg0, arg1, arg2);
}

