// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef savetty
static int(*funcptr) () = 0;

int savetty ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "savetty");
	return funcptr();
}

int lsb_savetty ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "savetty");
	return funcptr();
}

