// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef mvdelch
static int(*funcptr) (int , int ) = 0;

int mvdelch (int arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvdelch");
	validate_NULL_TYPETYPE(  arg0, "mvdelch");
	validate_NULL_TYPETYPE(  arg1, "mvdelch");
	return funcptr(arg0, arg1);
}

int __lsb_mvdelch (int arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvdelch");
	return funcptr(arg0, arg1);
}

