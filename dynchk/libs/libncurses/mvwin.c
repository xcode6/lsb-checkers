// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef mvwin
static int(*funcptr) (WINDOW * , int , int ) = 0;

int mvwin (WINDOW * arg0 , int arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvwin");
	validate_NULL_TYPETYPE(arg0, "mvwin");
	validate_NULL_TYPETYPE(arg1, "mvwin");
	validate_NULL_TYPETYPE(arg2, "mvwin");
	return funcptr(arg0, arg1, arg2);
}

int lsb_mvwin (WINDOW * arg0 , int arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvwin");
	return funcptr(arg0, arg1, arg2);
}

