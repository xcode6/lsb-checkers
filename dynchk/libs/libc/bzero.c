// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <string.h>
#undef bzero
static void(*funcptr) (void * , size_t ) = 0;

void bzero (void * arg0 , size_t arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "bzero");
	validate_Rdaddress( arg0, "bzero");
	validate_NULL_TYPETYPE(  arg0, "bzero");
	validate_NULL_TYPETYPE(  arg1, "bzero");
	funcptr(arg0, arg1);
}

void __lsb_bzero (void * arg0 , size_t arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "bzero");
	funcptr(arg0, arg1);
}

