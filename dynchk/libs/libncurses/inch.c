// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef inch
static chtype(*funcptr) () = 0;

chtype inch ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "inch");
	return funcptr();
}

chtype __lsb_inch ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "inch");
	return funcptr();
}

