// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef pause
static int(*funcptr) () = 0;

int pause ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pause");
	return funcptr();
}

int lsb_pause ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pause");
	return funcptr();
}

