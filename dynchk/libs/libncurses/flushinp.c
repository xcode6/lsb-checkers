// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef flushinp
static int(*funcptr) () = 0;

int flushinp ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "flushinp");
	return funcptr();
}

int __lsb_flushinp ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "flushinp");
	return funcptr();
}

