// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef attroff
static int(*funcptr) (int ) = 0;

int attroff (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "attroff");
	validate_NULL_TYPETYPE(  arg0, "attroff");
	return funcptr(arg0);
}

int __lsb_attroff (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "attroff");
	return funcptr(arg0);
}

