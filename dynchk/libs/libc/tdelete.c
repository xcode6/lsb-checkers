// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdlib.h>
#include <search.h>
#undef tdelete
static void *(*funcptr) (const void * , void * * , __compar_fn_t ) = 0;

void * tdelete (const void * arg0 , void * * arg1 , __compar_fn_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tdelete");
	validate_NULL_TYPETYPE(arg0, "tdelete");
	validate_NULL_TYPETYPE(arg1, "tdelete");
	validate_NULL_TYPETYPE(arg2, "tdelete");
	return funcptr(arg0, arg1, arg2);
}

void * lsb_tdelete (const void * arg0 , void * * arg1 , __compar_fn_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tdelete");
	return funcptr(arg0, arg1, arg2);
}

