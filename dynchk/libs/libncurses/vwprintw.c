// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#include <stdarg.h>
#undef vwprintw
static int(*funcptr) (WINDOW * , char * , va_list ) = 0;

int vwprintw (WINDOW * arg0 , char * arg1 , va_list arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vwprintw");
	validate_NULL_TYPETYPE(arg0, "vwprintw");
	validate_NULL_TYPETYPE(arg1, "vwprintw");
	validate_NULL_TYPETYPE(arg2, "vwprintw");
	return funcptr(arg0, arg1, arg2);
}

int lsb_vwprintw (WINDOW * arg0 , char * arg1 , va_list arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vwprintw");
	return funcptr(arg0, arg1, arg2);
}

