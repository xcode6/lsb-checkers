// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <string.h>
#undef strcoll
static int(*funcptr) (const char * , const char * ) = 0;

int strcoll (const char * arg0 , const char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strcoll");
	validate_NULL_TYPETYPE(arg0, "strcoll");
	validate_NULL_TYPETYPE(arg1, "strcoll");
	return funcptr(arg0, arg1);
}

int lsb_strcoll (const char * arg0 , const char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strcoll");
	return funcptr(arg0, arg1);
}

