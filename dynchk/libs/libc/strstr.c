// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <string.h>
#undef strstr
static char *(*funcptr) (const char * , const char * ) = 0;

char * strstr (const char * arg0 , const char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strstr");
	validate_NULL_TYPETYPE(arg0, "strstr");
	validate_NULL_TYPETYPE(arg1, "strstr");
	return funcptr(arg0, arg1);
}

char * lsb_strstr (const char * arg0 , const char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strstr");
	return funcptr(arg0, arg1);
}

