// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef setscrreg
static int(*funcptr) (int , int ) = 0;

int setscrreg (int arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setscrreg");
	validate_NULL_TYPETYPE(arg0, "setscrreg");
	validate_NULL_TYPETYPE(arg1, "setscrreg");
	return funcptr(arg0, arg1);
}

int lsb_setscrreg (int arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setscrreg");
	return funcptr(arg0, arg1);
}

