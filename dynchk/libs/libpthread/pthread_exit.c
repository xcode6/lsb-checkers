// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <pthread.h>
#undef pthread_exit
static void(*funcptr) (void * ) = 0;

void pthread_exit (void * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_exit");
	validate_Rdaddress( arg0, "pthread_exit");
	validate_NULL_TYPETYPE(  arg0, "pthread_exit");
	funcptr(arg0);
}

void __lsb_pthread_exit (void * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_exit");
	funcptr(arg0);
}

