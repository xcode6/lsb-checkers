// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef mvinstr
static int(*funcptr) (int , int , char * ) = 0;

int mvinstr (int arg0 , int arg1 , char * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvinstr");
	validate_NULL_TYPETYPE(arg0, "mvinstr");
	validate_NULL_TYPETYPE(arg1, "mvinstr");
	validate_NULL_TYPETYPE(arg2, "mvinstr");
	return funcptr(arg0, arg1, arg2);
}

int lsb_mvinstr (int arg0 , int arg1 , char * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvinstr");
	return funcptr(arg0, arg1, arg2);
}

