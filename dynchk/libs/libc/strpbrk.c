// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <string.h>
#undef strpbrk
static char *(*funcptr) (const char * , const char * ) = 0;

char * strpbrk (const char * arg0 , const char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strpbrk");
	validate_Rdaddress( arg0, "strpbrk");
	validate_NULL_TYPETYPE(  arg0, "strpbrk");
	validate_Rdaddress( arg1, "strpbrk");
	validate_NULL_TYPETYPE(  arg1, "strpbrk");
	return funcptr(arg0, arg1);
}

char * __lsb_strpbrk (const char * arg0 , const char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strpbrk");
	return funcptr(arg0, arg1);
}

