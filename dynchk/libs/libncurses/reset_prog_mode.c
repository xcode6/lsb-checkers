// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef reset_prog_mode
static int(*funcptr) () = 0;

int reset_prog_mode ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "reset_prog_mode");
	return funcptr();
}

int lsb_reset_prog_mode ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "reset_prog_mode");
	return funcptr();
}

