// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <pthread.h>
#undef pthread_key_delete
static int(*funcptr) (pthread_key_t ) = 0;

int pthread_key_delete (pthread_key_t arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_key_delete");
	validate_NULL_TYPETYPE(arg0, "pthread_key_delete");
	return funcptr(arg0);
}

int lsb_pthread_key_delete (pthread_key_t arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_key_delete");
	return funcptr(arg0);
}

