// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef mvaddstr
static int(*funcptr) (int , int , const char * ) = 0;

int mvaddstr (int arg0 , int arg1 , const char * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvaddstr");
	validate_NULL_TYPETYPE(  arg0, "mvaddstr");
	validate_NULL_TYPETYPE(  arg1, "mvaddstr");
	validate_Rdaddress( arg2, "mvaddstr");
	validate_NULL_TYPETYPE(  arg2, "mvaddstr");
	return funcptr(arg0, arg1, arg2);
}

int __lsb_mvaddstr (int arg0 , int arg1 , const char * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvaddstr");
	return funcptr(arg0, arg1, arg2);
}

