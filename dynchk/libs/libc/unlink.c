// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unistd.h>
#undef unlink
static int(*funcptr) (const char * ) = 0;

int unlink (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "unlink");
	validate_Rdaddress( arg0, "unlink");
	validate_NULL_TYPETYPE(  arg0, "unlink");
	return funcptr(arg0);
}

int __lsb_unlink (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "unlink");
	return funcptr(arg0);
}

