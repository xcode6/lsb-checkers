// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef keypad
static int(*funcptr) (WINDOW * , bool ) = 0;

int keypad (WINDOW * arg0 , bool arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "keypad");
	validate_Rdaddress( arg0, "keypad");
	validate_NULL_TYPETYPE(  arg0, "keypad");
	validate_NULL_TYPETYPE(  arg1, "keypad");
	return funcptr(arg0, arg1);
}

int __lsb_keypad (WINDOW * arg0 , bool arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "keypad");
	return funcptr(arg0, arg1);
}

