// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef addchstr
static int(*funcptr) (const chtype * ) = 0;

int addchstr (const chtype *arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "addchstr");
	validate_NULL_TYPETYPE(arg0, "addchstr");
	return funcptr(arg0);
}

int lsb_addchstr (const chtype *arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "addchstr");
	return funcptr(arg0);
}

