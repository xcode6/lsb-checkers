// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdlib.h>
#undef setenv
static int(*funcptr) (const char * , const char * , int ) = 0;

int setenv (const char * arg0 , const char * arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setenv");
	validate_Rdaddress( arg0, "setenv");
	validate_NULL_TYPETYPE(  arg0, "setenv");
	validate_Rdaddress( arg1, "setenv");
	validate_NULL_TYPETYPE(  arg1, "setenv");
	validate_NULL_TYPETYPE(  arg2, "setenv");
	return funcptr(arg0, arg1, arg2);
}

int __lsb_setenv (const char * arg0 , const char * arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setenv");
	return funcptr(arg0, arg1, arg2);
}

