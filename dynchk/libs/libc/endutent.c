// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef endutent
static void(*funcptr) () = 0;

void endutent ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "endutent");
	funcptr();
}

void lsb_endutent ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "endutent");
	funcptr();
}

