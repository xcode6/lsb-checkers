// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdlib.h>
#undef strtoq
static long long(*funcptr) (const char * , char * * , int ) = 0;

long long strtoq (const char * arg0 , char * * arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strtoq");
	validate_Rdaddress( arg0, "strtoq");
	validate_NULL_TYPETYPE(  arg0, "strtoq");
	validate_Rdaddress( arg1, "strtoq");
	validate_Rdaddress(* arg1, "strtoq");
	validate_NULL_TYPETYPE(  arg1, "strtoq");
	validate_NULL_TYPETYPE(  arg2, "strtoq");
	return funcptr(arg0, arg1, arg2);
}

long long __lsb_strtoq (const char * arg0 , char * * arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strtoq");
	return funcptr(arg0, arg1, arg2);
}

