// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <netdb.h>
#undef freeaddrinfo
static void(*funcptr) (struct addrinfo * ) = 0;

void freeaddrinfo (struct addrinfo * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "freeaddrinfo");
	validate_Rdaddress( arg0, "freeaddrinfo");
	validate_NULL_TYPETYPE(  arg0, "freeaddrinfo");
	funcptr(arg0);
}

void __lsb_freeaddrinfo (struct addrinfo * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "freeaddrinfo");
	funcptr(arg0);
}

