// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef touchline
static int(*funcptr) (WINDOW * , int , int ) = 0;

int touchline (WINDOW * arg0 , int arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "touchline");
	validate_Rdaddress( arg0, "touchline");
	validate_NULL_TYPETYPE(  arg0, "touchline");
	validate_NULL_TYPETYPE(  arg1, "touchline");
	validate_NULL_TYPETYPE(  arg2, "touchline");
	return funcptr(arg0, arg1, arg2);
}

int __lsb_touchline (WINDOW * arg0 , int arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "touchline");
	return funcptr(arg0, arg1, arg2);
}

