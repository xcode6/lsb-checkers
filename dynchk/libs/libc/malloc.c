// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#undef malloc
static void *(*funcptr) (size_t ) = 0;

void * malloc (size_t arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "malloc");
	validate_NULL_TYPETYPE(arg0, "malloc");
	return funcptr(arg0);
}

void * lsb_malloc (size_t arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "malloc");
	return funcptr(arg0);
}

