// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/shm.h>
#undef __getpagesize
static int(*funcptr) () = 0;

int __getpagesize ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__getpagesize");
	return funcptr();
}

int __lsb___getpagesize ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__getpagesize");
	return funcptr();
}

