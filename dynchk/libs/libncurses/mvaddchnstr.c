// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef mvaddchnstr
static int(*funcptr) (int , int , const chtype * , int ) = 0;

int mvaddchnstr (int arg0 , int arg1 , const chtype * arg2 , int arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvaddchnstr");
	validate_NULL_TYPETYPE(  arg0, "mvaddchnstr");
	validate_NULL_TYPETYPE(  arg1, "mvaddchnstr");
	validate_Rdaddress( arg2, "mvaddchnstr");
	validate_NULL_TYPETYPE(  arg2, "mvaddchnstr");
	validate_NULL_TYPETYPE(  arg3, "mvaddchnstr");
	return funcptr(arg0, arg1, arg2, arg3);
}

int __lsb_mvaddchnstr (int arg0 , int arg1 , const chtype * arg2 , int arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvaddchnstr");
	return funcptr(arg0, arg1, arg2, arg3);
}

