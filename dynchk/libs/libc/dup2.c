// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unistd.h>
#undef dup2
static int(*funcptr) (int , int ) = 0;

int dup2 (int arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "dup2");
	validate_NULL_TYPETYPE(  arg0, "dup2");
	validate_NULL_TYPETYPE(  arg1, "dup2");
	return funcptr(arg0, arg1);
}

int __lsb_dup2 (int arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "dup2");
	return funcptr(arg0, arg1);
}

