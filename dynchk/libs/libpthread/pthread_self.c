// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef pthread_self
static pthread_t(*funcptr) () = 0;

pthread_t pthread_self ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_self");
	return funcptr();
}

pthread_t lsb_pthread_self ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_self");
	return funcptr();
}

