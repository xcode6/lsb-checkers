// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef mvwinnstr
static int(*funcptr) (WINDOW * , int , int , char * , int ) = 0;

int mvwinnstr (WINDOW * arg0 , int arg1 , int arg2 , char * arg3 , int arg4 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvwinnstr");
	validate_Rdaddress( arg0, "mvwinnstr");
	validate_NULL_TYPETYPE(  arg0, "mvwinnstr");
	validate_NULL_TYPETYPE(  arg1, "mvwinnstr");
	validate_NULL_TYPETYPE(  arg2, "mvwinnstr");
	validate_Rdaddress( arg3, "mvwinnstr");
	validate_NULL_TYPETYPE(  arg3, "mvwinnstr");
	validate_NULL_TYPETYPE(  arg4, "mvwinnstr");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

int __lsb_mvwinnstr (WINDOW * arg0 , int arg1 , int arg2 , char * arg3 , int arg4 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvwinnstr");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

