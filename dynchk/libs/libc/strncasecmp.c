// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <string.h>
#undef strncasecmp
static int(*funcptr) (const char * , const char * , size_t ) = 0;

int strncasecmp (const char * arg0 , const char * arg1 , size_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strncasecmp");
	validate_Rdaddress( arg0, "strncasecmp");
	validate_NULL_TYPETYPE(  arg0, "strncasecmp");
	validate_Rdaddress( arg1, "strncasecmp");
	validate_NULL_TYPETYPE(  arg1, "strncasecmp");
	validate_NULL_TYPETYPE(  arg2, "strncasecmp");
	return funcptr(arg0, arg1, arg2);
}

int __lsb_strncasecmp (const char * arg0 , const char * arg1 , size_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strncasecmp");
	return funcptr(arg0, arg1, arg2);
}

