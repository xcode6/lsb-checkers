// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(int, char * *) = 0;

void SmFreeReasons(int arg0, char * * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmFreeReasons");
	validate_NULL_TYPETYPE(arg0, "SmFreeReasons");
	validate_NULL_TYPETYPE(arg1, "SmFreeReasons");
	return funcptr(arg0, arg1);
}

void __lsb_SmFreeReasons(int arg0, char * * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmFreeReasons");
	return funcptr(arg0, arg1);
}

