// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdlib.h>
#undef exit
static void(*funcptr) (int ) = 0;

void exit (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "exit");
	validate_NULL_TYPETYPE(  arg0, "exit");
	funcptr(arg0);
}

void __lsb_exit (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "exit");
	funcptr(arg0);
}

