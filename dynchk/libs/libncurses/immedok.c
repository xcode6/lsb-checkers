// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef immedok
static void(*funcptr) (WINDOW * , bool ) = 0;

void immedok (WINDOW * arg0 , bool arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "immedok");
	validate_NULL_TYPETYPE(arg0, "immedok");
	validate_NULL_TYPETYPE(arg1, "immedok");
	funcptr(arg0, arg1);
}

void lsb_immedok (WINDOW * arg0 , bool arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "immedok");
	funcptr(arg0, arg1);
}

