// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <string.h>
#undef __stpcpy
static char *(*funcptr) (char * , const char * ) = 0;

char * __stpcpy (char * arg0 , const char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__stpcpy");
	validate_Rdaddress( arg0, "__stpcpy");
	validate_NULL_TYPETYPE(  arg0, "__stpcpy");
	validate_Rdaddress( arg1, "__stpcpy");
	validate_NULL_TYPETYPE(  arg1, "__stpcpy");
	return funcptr(arg0, arg1);
}

char * __lsb___stpcpy (char * arg0 , const char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__stpcpy");
	return funcptr(arg0, arg1);
}

