// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <pthread.h>
#undef pthread_attr_getstackaddr
static int(*funcptr) (const pthread_attr_t * , void * * ) = 0;

int pthread_attr_getstackaddr (const pthread_attr_t * arg0 , void * * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_attr_getstackaddr");
	validate_Rdaddress( arg0, "pthread_attr_getstackaddr");
	validate_NULL_TYPETYPE(  arg0, "pthread_attr_getstackaddr");
	validate_Rdaddress( arg1, "pthread_attr_getstackaddr");
	validate_Rdaddress(* arg1, "pthread_attr_getstackaddr");
	validate_NULL_TYPETYPE(  arg1, "pthread_attr_getstackaddr");
	return funcptr(arg0, arg1);
}

int __lsb_pthread_attr_getstackaddr (const pthread_attr_t * arg0 , void * * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_attr_getstackaddr");
	return funcptr(arg0, arg1);
}

