// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <pthread.h>
#undef _pthread_cleanup_push
static void(*funcptr) (struct _pthread_cleanup_buffer * , void(* )(void *), void * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void _pthread_cleanup_push (struct _pthread_cleanup_buffer * arg0 , void(* arg1 )(void *), void * arg2 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_pthread_cleanup_push");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "_pthread_cleanup_push()");
	validate_RWaddress( arg0, "_pthread_cleanup_push - arg0");
		validate_NULL_TYPETYPE(  arg0, "_pthread_cleanup_push - arg0");
validate_Rdaddress( arg1, "_pthread_cleanup_push - arg1");
		validate_NULL_TYPETYPE(  arg1, "_pthread_cleanup_push - arg1");
	validate_RWaddress( arg2, "_pthread_cleanup_push - arg2");
		validate_NULL_TYPETYPE(  arg2, "_pthread_cleanup_push - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

