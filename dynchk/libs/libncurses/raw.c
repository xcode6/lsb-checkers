// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef raw
static int(*funcptr) () = 0;

int raw ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "raw");
	return funcptr();
}

int __lsb_raw ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "raw");
	return funcptr();
}

