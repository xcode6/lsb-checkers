// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unistd.h>
#undef _exit
static void(*funcptr) (int ) = 0;

void _exit (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_exit");
	validate_NULL_TYPETYPE(arg0, "_exit");
	funcptr(arg0);
}

void lsb__exit (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_exit");
	funcptr(arg0);
}

