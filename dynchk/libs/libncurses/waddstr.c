// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef waddstr
static int(*funcptr) (WINDOW * , const char * ) = 0;

int waddstr (WINDOW * arg0 , const char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "waddstr");
	validate_NULL_TYPETYPE(arg0, "waddstr");
	validate_NULL_TYPETYPE(arg1, "waddstr");
	return funcptr(arg0, arg1);
}

int lsb_waddstr (WINDOW * arg0 , const char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "waddstr");
	return funcptr(arg0, arg1);
}

