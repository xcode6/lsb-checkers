// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unistd.h>
#undef crypt
static char *(*funcptr) (const char * , const char * ) = 0;

char * crypt (const char * arg0 , const char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "crypt");
	validate_NULL_TYPETYPE(arg0, "crypt");
	validate_NULL_TYPETYPE(arg1, "crypt");
	return funcptr(arg0, arg1);
}

char * lsb_crypt (const char * arg0 , const char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "crypt");
	return funcptr(arg0, arg1);
}

