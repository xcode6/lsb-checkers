// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef wgetnstr
static int(*funcptr) (WINDOW * , char * , int ) = 0;

int wgetnstr (WINDOW * arg0 , char * arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wgetnstr");
	validate_Rdaddress( arg0, "wgetnstr");
	validate_NULL_TYPETYPE(  arg0, "wgetnstr");
	validate_Rdaddress( arg1, "wgetnstr");
	validate_NULL_TYPETYPE(  arg1, "wgetnstr");
	validate_NULL_TYPETYPE(  arg2, "wgetnstr");
	return funcptr(arg0, arg1, arg2);
}

int __lsb_wgetnstr (WINDOW * arg0 , char * arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wgetnstr");
	return funcptr(arg0, arg1, arg2);
}

