// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <string.h>
#undef strncat
static char *(*funcptr) (char * , const char * , size_t ) = 0;

char * strncat (char * arg0 , const char * arg1 , size_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strncat");
	validate_Rdaddress( arg0, "strncat");
	validate_NULL_TYPETYPE(  arg0, "strncat");
	validate_Rdaddress( arg1, "strncat");
	validate_NULL_TYPETYPE(  arg1, "strncat");
	validate_NULL_TYPETYPE(  arg2, "strncat");
	return funcptr(arg0, arg1, arg2);
}

char * __lsb_strncat (char * arg0 , const char * arg1 , size_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strncat");
	return funcptr(arg0, arg1, arg2);
}

