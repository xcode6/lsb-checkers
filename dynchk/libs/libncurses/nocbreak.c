// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef nocbreak
static int(*funcptr) () = 0;

int nocbreak ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "nocbreak");
	return funcptr();
}

int lsb_nocbreak ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "nocbreak");
	return funcptr();
}

