// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef newpad
static WINDOW *(*funcptr) (int , int ) = 0;

WINDOW * newpad (int arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "newpad");
	validate_NULL_TYPETYPE(arg0, "newpad");
	validate_NULL_TYPETYPE(arg1, "newpad");
	return funcptr(arg0, arg1);
}

WINDOW * lsb_newpad (int arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "newpad");
	return funcptr(arg0, arg1);
}

