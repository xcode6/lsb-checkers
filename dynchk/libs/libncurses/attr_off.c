// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef attr_off
static int(*funcptr) (attr_t , void * ) = 0;

int attr_off (attr_t arg0 , void * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "attr_off");
	validate_NULL_TYPETYPE(arg0, "attr_off");
	validate_NULL_TYPETYPE(arg1, "attr_off");
	return funcptr(arg0, arg1);
}

int lsb_attr_off (attr_t arg0 , void * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "attr_off");
	return funcptr(arg0, arg1);
}

