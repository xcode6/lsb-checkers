// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#undef perror
static void(*funcptr) (const char * ) = 0;

void perror (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "perror");
	validate_Rdaddress( arg0, "perror");
	validate_NULL_TYPETYPE(  arg0, "perror");
	funcptr(arg0);
}

void __lsb_perror (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "perror");
	funcptr(arg0);
}

