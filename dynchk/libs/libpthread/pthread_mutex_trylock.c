// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <pthread.h>
#undef pthread_mutex_trylock
static int(*funcptr) (pthread_mutex_t * ) = 0;

int pthread_mutex_trylock (pthread_mutex_t * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_mutex_trylock");
	validate_Rdaddress( arg0, "pthread_mutex_trylock");
	validate_NULL_TYPETYPE(  arg0, "pthread_mutex_trylock");
	return funcptr(arg0);
}

int __lsb_pthread_mutex_trylock (pthread_mutex_t * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_mutex_trylock");
	return funcptr(arg0);
}

