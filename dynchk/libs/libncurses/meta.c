// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef meta
static int(*funcptr) (WINDOW * , bool ) = 0;

int meta (WINDOW * arg0 , bool arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "meta");
	validate_NULL_TYPETYPE(arg0, "meta");
	validate_NULL_TYPETYPE(arg1, "meta");
	return funcptr(arg0, arg1);
}

int lsb_meta (WINDOW * arg0 , bool arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "meta");
	return funcptr(arg0, arg1);
}

