// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef killchar
static char(*funcptr) () = 0;

char killchar ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "killchar");
	return funcptr();
}

char __lsb_killchar ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "killchar");
	return funcptr();
}

