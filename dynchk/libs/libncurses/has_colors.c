// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef has_colors
static bool(*funcptr) () = 0;

bool has_colors ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "has_colors");
	return funcptr();
}

bool __lsb_has_colors ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "has_colors");
	return funcptr();
}

