// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef getdate
static struct tm *(*funcptr) (const char * ) = 0;

struct tm * getdate (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getdate");
	validate_NULL_TYPETYPE(arg0, "getdate");
	return funcptr(arg0);
}

struct tm * lsb_getdate (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getdate");
	return funcptr(arg0);
}

