// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <sys/epoll.h>
#undef epoll_wait
static int(*funcptr) (int , struct epoll_event * , int , int ) = 0;

extern int __lsb_check_params;
int epoll_wait (int arg0 , struct epoll_event * arg1 , int arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for epoll_wait()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "epoll_wait", "GLIBC_2.3.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load epoll_wait. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "epoll_wait() - validating");
		validate_NULL_TYPETYPE(  arg0, "epoll_wait - arg0 (__epfd)");
		if( arg1 ) {
		validate_RWaddress( arg1, "epoll_wait - arg1 (__events)");
		}
		validate_NULL_TYPETYPE(  arg1, "epoll_wait - arg1 (__events)");
		validate_NULL_TYPETYPE(  arg2, "epoll_wait - arg2 (__maxevents)");
		validate_NULL_TYPETYPE(  arg3, "epoll_wait - arg3 (__timeout)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}
