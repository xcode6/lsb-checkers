// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <pthread.h>
#undef pthread_rwlock_destroy
static int(*funcptr) (pthread_rwlock_t * ) = 0;

int pthread_rwlock_destroy (pthread_rwlock_t * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_rwlock_destroy");
	validate_Rdaddress( arg0, "pthread_rwlock_destroy");
	validate_NULL_TYPETYPE(  arg0, "pthread_rwlock_destroy");
	return funcptr(arg0);
}

int __lsb_pthread_rwlock_destroy (pthread_rwlock_t * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_rwlock_destroy");
	return funcptr(arg0);
}

