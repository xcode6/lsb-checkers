// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef glob
static int(*funcptr) (const char * , int (*)(const char *, int) , int , glob_t * ) = 0;

int glob (const char * arg0 , int arg1 , int (*arg2)(const char *, int), glob_t * arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glob");
	validate_NULL_TYPETYPE(arg0, "glob");
	validate_NULL_TYPETYPE(arg1, "glob");
	validate_NULL_TYPETYPE(arg2, "glob");
	validate_NULL_TYPETYPE(arg3, "glob");
	return funcptr(arg0, arg1, arg2, arg3);
}

int lsb_glob (const char * arg0 , int (*arg1)(const char *, int) , int arg2 , glob_t * arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glob");
	return funcptr(arg0, arg1, arg2, arg3);
}

