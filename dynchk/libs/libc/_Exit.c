// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdlib.h>
#undef _Exit
static void(*funcptr) (int ) = 0;

void _Exit (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_Exit");
	validate_NULL_TYPETYPE(  arg0, "_Exit");
	funcptr(arg0);
}

void __lsb__Exit (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_Exit");
	funcptr(arg0);
}

