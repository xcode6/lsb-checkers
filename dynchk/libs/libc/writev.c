// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/socket.h>
#include <sys/uio.h>
#undef writev
static ssize_t(*funcptr) (int , const struct iovec * , int ) = 0;

ssize_t writev (int arg0 , const struct iovec * arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "writev");
	validate_NULL_TYPETYPE(arg0, "writev");
	validate_NULL_TYPETYPE(arg1, "writev");
	validate_NULL_TYPETYPE(arg2, "writev");
	return funcptr(arg0, arg1, arg2);
}

ssize_t lsb_writev (int arg0 , const struct iovec * arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "writev");
	return funcptr(arg0, arg1, arg2);
}

