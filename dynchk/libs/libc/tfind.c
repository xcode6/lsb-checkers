// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdlib.h>
#undef tfind
static void *(*funcptr) (const void * , void * const * , __compar_fn_t ) = 0;

void * tfind (const void * arg0 , void * const * arg1 , __compar_fn_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tfind");
	validate_NULL_TYPETYPE(arg0, "tfind");
	validate_NULL_TYPETYPE(arg1, "tfind");
	validate_NULL_TYPETYPE(arg2, "tfind");
	return funcptr(arg0, arg1, arg2);
}

void * lsb_tfind (const void * arg0 , void * const * arg1 , __compar_fn_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tfind");
	return funcptr(arg0, arg1, arg2);
}

