// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef intrflush
static int(*funcptr) (WINDOW * , bool ) = 0;

int intrflush (WINDOW * arg0 , bool arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "intrflush");
	validate_Rdaddress( arg0, "intrflush");
	validate_NULL_TYPETYPE(  arg0, "intrflush");
	validate_NULL_TYPETYPE(  arg1, "intrflush");
	return funcptr(arg0, arg1);
}

int __lsb_intrflush (WINDOW * arg0 , bool arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "intrflush");
	return funcptr(arg0, arg1);
}

