// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <ctype.h>
#undef toupper
static int(*funcptr) (int ) = 0;

int toupper (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "toupper");
	validate_NULL_TYPETYPE(arg0, "toupper");
	return funcptr(arg0);
}

int lsb_toupper (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "toupper");
	return funcptr(arg0);
}

