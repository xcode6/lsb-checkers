// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <sys/types.h>
#undef mmap
static void *(*funcptr) (void * , size_t , int , int , int , off_t ) = 0;

void * mmap (void * arg0 , size_t arg1 , int arg2 , int arg3 , int arg4 , off_t arg5 )
{
	void *ret;

	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mmap");
	validate_NULL_TYPETYPE(arg0, "mmap");
	validate_NULL_TYPETYPE(arg1, "mmap");
	validate_NULL_TYPETYPE(arg2, "mmap");
	validate_NULL_TYPETYPE(arg3, "mmap");
	validate_filedescriptor(arg4, "mmap");
	validate_NULL_TYPETYPE(arg5, "mmap");
	ret = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	load_memmap();
	return ret;
}

void * __lsb_mmap (void * arg0 , size_t arg1 , int arg2 , int arg3 , int arg4 , off_t arg5 )
{
	void *ret;

	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mmap");
	ret = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	load_memmap();
	return ret;
}

