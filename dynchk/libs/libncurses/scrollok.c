// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef scrollok
static int(*funcptr) (WINDOW * , bool ) = 0;

int scrollok (WINDOW * arg0 , bool arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "scrollok");
	validate_NULL_TYPETYPE(arg0, "scrollok");
	validate_NULL_TYPETYPE(arg1, "scrollok");
	return funcptr(arg0, arg1);
}

int lsb_scrollok (WINDOW * arg0 , bool arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "scrollok");
	return funcptr(arg0, arg1);
}

