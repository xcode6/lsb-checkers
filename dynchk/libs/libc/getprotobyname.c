// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <netdb.h>
#undef getprotobyname
static struct protoent *(*funcptr) (const char * ) = 0;

struct protoent * getprotobyname (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getprotobyname");
	validate_Rdaddress( arg0, "getprotobyname");
	validate_NULL_TYPETYPE(  arg0, "getprotobyname");
	return funcptr(arg0);
}

struct protoent * __lsb_getprotobyname (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getprotobyname");
	return funcptr(arg0);
}

