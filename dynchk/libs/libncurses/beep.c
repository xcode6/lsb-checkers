// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef beep
static int(*funcptr) () = 0;

int beep ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "beep");
	return funcptr();
}

int __lsb_beep ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "beep");
	return funcptr();
}

