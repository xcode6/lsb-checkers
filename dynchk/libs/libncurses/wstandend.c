// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef wstandend
static int(*funcptr) (WINDOW * ) = 0;

int wstandend (WINDOW * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wstandend");
	validate_NULL_TYPETYPE(arg0, "wstandend");
	return funcptr(arg0);
}

int lsb_wstandend (WINDOW * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wstandend");
	return funcptr(arg0);
}

