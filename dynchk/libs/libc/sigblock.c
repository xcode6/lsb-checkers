// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef sigblock
static int(*funcptr) (int ) = 0;

int sigblock (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sigblock");
	validate_NULL_TYPETYPE(arg0, "sigblock");
	return funcptr(arg0);
}

int lsb_sigblock (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sigblock");
	return funcptr(arg0);
}

