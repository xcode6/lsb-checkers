// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef mvinchnstr
static int(*funcptr) (int , int , chtype * , int ) = 0;

int mvinchnstr (int arg0 , int arg1 , chtype * arg2 , int arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvinchnstr");
	validate_NULL_TYPETYPE(arg0, "mvinchnstr");
	validate_NULL_TYPETYPE(arg1, "mvinchnstr");
	validate_NULL_TYPETYPE(arg2, "mvinchnstr");
	validate_NULL_TYPETYPE(arg3, "mvinchnstr");
	return funcptr(arg0, arg1, arg2, arg3);
}

int lsb_mvinchnstr (int arg0 , int arg1 , chtype * arg2 , int arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvinchnstr");
	return funcptr(arg0, arg1, arg2, arg3);
}

