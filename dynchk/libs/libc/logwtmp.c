// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <utmp.h>
#undef logwtmp
static void(*funcptr) (const char * , const char * , const char * ) = 0;

void logwtmp (const char * arg0 , const char * arg1 , const char * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "logwtmp");
	validate_Rdaddress( arg0, "logwtmp");
	validate_NULL_TYPETYPE(  arg0, "logwtmp");
	validate_Rdaddress( arg1, "logwtmp");
	validate_NULL_TYPETYPE(  arg1, "logwtmp");
	validate_Rdaddress( arg2, "logwtmp");
	validate_NULL_TYPETYPE(  arg2, "logwtmp");
	funcptr(arg0, arg1, arg2);
}

void __lsb_logwtmp (const char * arg0 , const char * arg1 , const char * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "logwtmp");
	funcptr(arg0, arg1, arg2);
}

