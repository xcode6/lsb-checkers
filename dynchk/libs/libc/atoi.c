// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdlib.h>
#undef atoi
static int(*funcptr) (const char * ) = 0;

int atoi (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atoi");
	validate_Rdaddress( arg0, "atoi");
	validate_NULL_TYPETYPE(  arg0, "atoi");
	return funcptr(arg0);
}

int __lsb_atoi (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atoi");
	return funcptr(arg0);
}

