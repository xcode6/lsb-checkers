// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#undef fgetpos64
static int(*funcptr) (FILE * , fpos64_t * ) = 0;

int fgetpos64 (FILE * arg0 , fpos64_t * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fgetpos64");
	validate_Rdaddress( arg0, "fgetpos64");
	validate_NULL_TYPETYPE(  arg0, "fgetpos64");
	validate_Rdaddress( arg1, "fgetpos64");
	validate_NULL_TYPETYPE(  arg1, "fgetpos64");
	return funcptr(arg0, arg1);
}

int __lsb_fgetpos64 (FILE * arg0 , fpos64_t * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fgetpos64");
	return funcptr(arg0, arg1);
}

