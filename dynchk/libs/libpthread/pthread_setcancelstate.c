// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <pthread.h>
#undef pthread_setcancelstate
static int(*funcptr) (int , int * ) = 0;

int pthread_setcancelstate (int arg0 , int * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_setcancelstate");
	validate_NULL_TYPETYPE(  arg0, "pthread_setcancelstate");
	validate_Rdaddress( arg1, "pthread_setcancelstate");
	validate_NULL_TYPETYPE(  arg1, "pthread_setcancelstate");
	return funcptr(arg0, arg1);
}

int __lsb_pthread_setcancelstate (int arg0 , int * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_setcancelstate");
	return funcptr(arg0, arg1);
}

