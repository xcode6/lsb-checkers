// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <string.h>
#undef memcmp
static int(*funcptr) (const void * , const void * , size_t ) = 0;

int memcmp (const void * arg0 , const void * arg1 , size_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "memcmp");
	validate_NULL_TYPETYPE(arg0, "memcmp");
	validate_NULL_TYPETYPE(arg1, "memcmp");
	validate_NULL_TYPETYPE(arg2, "memcmp");
	return funcptr(arg0, arg1, arg2);
}

int lsb_memcmp (const void * arg0 , const void * arg1 , size_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "memcmp");
	return funcptr(arg0, arg1, arg2);
}

