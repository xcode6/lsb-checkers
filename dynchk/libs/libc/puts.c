// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#undef puts
static int(*funcptr) (const char * ) = 0;

int puts (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "puts");
	validate_NULL_TYPETYPE(arg0, "puts");
	return funcptr(arg0);
}

int lsb_puts (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "puts");
	return funcptr(arg0);
}

