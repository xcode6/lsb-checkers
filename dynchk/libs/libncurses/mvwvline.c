// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef mvwvline
static int(*funcptr) (WINDOW * , int , int , chtype , int ) = 0;

int mvwvline (WINDOW * arg0 , int arg1 , int arg2 , chtype arg3 , int arg4 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvwvline");
	validate_NULL_TYPETYPE(arg0, "mvwvline");
	validate_NULL_TYPETYPE(arg1, "mvwvline");
	validate_NULL_TYPETYPE(arg2, "mvwvline");
	validate_NULL_TYPETYPE(arg3, "mvwvline");
	validate_NULL_TYPETYPE(arg4, "mvwvline");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

int lsb_mvwvline (WINDOW * arg0 , int arg1 , int arg2 , chtype arg3 , int arg4 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvwvline");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

