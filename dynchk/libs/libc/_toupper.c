// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <ctype.h>
#undef _toupper
static int(*funcptr) (int ) = 0;

int _toupper (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_toupper");
	validate_NULL_TYPETYPE(arg0, "_toupper");
	return funcptr(arg0);
}

int lsb__toupper (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_toupper");
	return funcptr(arg0);
}

