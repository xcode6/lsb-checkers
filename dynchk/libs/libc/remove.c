// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#undef remove
static int(*funcptr) (const char * ) = 0;

int remove (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "remove");
	validate_Rdaddress( arg0, "remove");
	validate_NULL_TYPETYPE(  arg0, "remove");
	return funcptr(arg0);
}

int __lsb_remove (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "remove");
	return funcptr(arg0);
}

