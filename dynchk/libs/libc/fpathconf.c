// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unistd.h>
#undef fpathconf
static long(*funcptr) (int , int ) = 0;

long fpathconf (int arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fpathconf");
	validate_NULL_TYPETYPE(  arg0, "fpathconf");
	validate_NULL_TYPETYPE(  arg1, "fpathconf");
	return funcptr(arg0, arg1);
}

long __lsb_fpathconf (int arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fpathconf");
	return funcptr(arg0, arg1);
}

