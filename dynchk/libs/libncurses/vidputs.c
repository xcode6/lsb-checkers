// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef vidputs
static int(*funcptr) (chtype , int(*)(int) ) = 0;

int vidputs (chtype arg0 , int(*arg1)(int) )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vidputs");
	validate_NULL_TYPETYPE(arg0, "vidputs");
	validate_NULL_TYPETYPE(arg1, "vidputs");
	return funcptr(arg0, arg1);
}

int lsb_vidputs (chtype arg0 , int(*arg1)(int) )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vidputs");
	return funcptr(arg0, arg1);
}

