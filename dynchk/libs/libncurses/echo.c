// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef echo
static int(*funcptr) () = 0;

int echo ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "echo");
	return funcptr();
}

int __lsb_echo ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "echo");
	return funcptr();
}

