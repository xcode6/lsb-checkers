// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef inchstr
static int(*funcptr) (chtype * ) = 0;

int inchstr (chtype * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "inchstr");
	validate_Rdaddress( arg0, "inchstr");
	validate_NULL_TYPETYPE(  arg0, "inchstr");
	return funcptr(arg0);
}

int __lsb_inchstr (chtype * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "inchstr");
	return funcptr(arg0);
}

