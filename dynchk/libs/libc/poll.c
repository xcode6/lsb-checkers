// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/poll.h>
#include <poll.h>
#undef poll
static int(*funcptr) (struct pollfd * , nfds_t , int ) = 0;

int poll (struct pollfd * arg0 , nfds_t arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "poll");
	validate_NULL_TYPETYPE(arg0, "poll");
	validate_NULL_TYPETYPE(arg1, "poll");
	validate_NULL_TYPETYPE(arg2, "poll");
	return funcptr(arg0, arg1, arg2);
}

int lsb_poll (struct pollfd * arg0 , nfds_t arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "poll");
	return funcptr(arg0, arg1, arg2);
}

