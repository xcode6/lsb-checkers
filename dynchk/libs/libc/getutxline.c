// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <utmpx.h>
#undef getutxline
static struct utmpx *(*funcptr) (const struct utmpx * ) = 0;

struct utmpx * getutxline (const struct utmpx * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getutxline");
	validate_Rdaddress( arg0, "getutxline");
	validate_NULL_TYPETYPE(  arg0, "getutxline");
	return funcptr(arg0);
}

struct utmpx * __lsb_getutxline (const struct utmpx * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getutxline");
	return funcptr(arg0);
}

