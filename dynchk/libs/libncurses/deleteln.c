// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef deleteln
static int(*funcptr) () = 0;

int deleteln ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "deleteln");
	return funcptr();
}

int __lsb_deleteln ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "deleteln");
	return funcptr();
}

