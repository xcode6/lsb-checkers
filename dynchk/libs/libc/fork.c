// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef fork
static pid_t(*funcptr) () = 0;

pid_t fork ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fork");
	return funcptr();
}

pid_t lsb_fork ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fork");
	return funcptr();
}

