// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <ctype.h>
#undef isblank
static int(*funcptr) (int ) = 0;

int isblank (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "isblank");
	validate_NULL_TYPETYPE(  arg0, "isblank");
	return funcptr(arg0);
}

int __lsb_isblank (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "isblank");
	return funcptr(arg0);
}

