// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef endgrent
static void(*funcptr) () = 0;

void endgrent ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "endgrent");
	funcptr();
}

void lsb_endgrent ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "endgrent");
	funcptr();
}

