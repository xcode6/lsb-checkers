// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <unistd.h>
#undef pread64
static ssize_t(*funcptr) (int , void * , size_t , off64_t ) = 0;

ssize_t pread64 (int arg0 , void * arg1 , size_t arg2 , off64_t arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pread64");
	validate_NULL_TYPETYPE(arg0, "pread64");
	validate_NULL_TYPETYPE(arg1, "pread64");
	validate_NULL_TYPETYPE(arg2, "pread64");
	validate_NULL_TYPETYPE(arg3, "pread64");
	return funcptr(arg0, arg1, arg2, arg3);
}

ssize_t lsb_pread64 (int arg0 , void * arg1 , size_t arg2 , off64_t arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pread64");
	return funcptr(arg0, arg1, arg2, arg3);
}

