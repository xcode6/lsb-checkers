// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <ctype.h>
#undef isascii
static int(*funcptr) (int ) = 0;

int isascii (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "isascii");
	validate_NULL_TYPETYPE(arg0, "isascii");
	return funcptr(arg0);
}

int lsb_isascii (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "isascii");
	return funcptr(arg0);
}

