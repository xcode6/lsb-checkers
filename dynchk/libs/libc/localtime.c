// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
#include <time.h>
#undef localtime
static struct tm *(*funcptr) (const time_t * ) = 0;

struct tm * localtime (const time_t * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "localtime");
	validate_Rdaddress( arg0, "localtime");
	validate_NULL_TYPETYPE(  arg0, "localtime");
	return funcptr(arg0);
}

struct tm * __lsb_localtime (const time_t * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "localtime");
	return funcptr(arg0);
}

