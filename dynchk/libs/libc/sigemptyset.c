// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef sigemptyset
static int(*funcptr) (sigset_t * ) = 0;

int sigemptyset (sigset_t * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sigemptyset");
	validate_NULL_TYPETYPE(arg0, "sigemptyset");
	return funcptr(arg0);
}

int lsb_sigemptyset (sigset_t * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sigemptyset");
	return funcptr(arg0);
}

