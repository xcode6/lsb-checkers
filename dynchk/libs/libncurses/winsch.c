// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef winsch
static int(*funcptr) (WINDOW * , chtype ) = 0;

int winsch (WINDOW * arg0 , chtype arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "winsch");
	validate_Rdaddress( arg0, "winsch");
	validate_NULL_TYPETYPE(  arg0, "winsch");
	validate_NULL_TYPETYPE(  arg1, "winsch");
	return funcptr(arg0, arg1);
}

int __lsb_winsch (WINDOW * arg0 , chtype arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "winsch");
	return funcptr(arg0, arg1);
}

