// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <pthread.h>
#undef pthread_condattr_init
static int(*funcptr) (pthread_condattr_t * ) = 0;

int pthread_condattr_init (pthread_condattr_t * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_condattr_init");
	validate_Rdaddress( arg0, "pthread_condattr_init");
	validate_NULL_TYPETYPE(  arg0, "pthread_condattr_init");
	return funcptr(arg0);
}

int __lsb_pthread_condattr_init (pthread_condattr_t * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_condattr_init");
	return funcptr(arg0);
}

