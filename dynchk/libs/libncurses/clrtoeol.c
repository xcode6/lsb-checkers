// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef clrtoeol
static int(*funcptr) () = 0;

int clrtoeol ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "clrtoeol");
	return funcptr();
}

int __lsb_clrtoeol ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "clrtoeol");
	return funcptr();
}

