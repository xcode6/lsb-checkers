// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <pthread.h>
#undef pthread_mutexattr_destroy
static int(*funcptr) (pthread_mutexattr_t * ) = 0;

int pthread_mutexattr_destroy (pthread_mutexattr_t * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_mutexattr_destroy");
	validate_Rdaddress( arg0, "pthread_mutexattr_destroy");
	validate_NULL_TYPETYPE(  arg0, "pthread_mutexattr_destroy");
	return funcptr(arg0);
}

int __lsb_pthread_mutexattr_destroy (pthread_mutexattr_t * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_mutexattr_destroy");
	return funcptr(arg0);
}

