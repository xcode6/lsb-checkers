// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <ctype.h>
#undef toascii
static int(*funcptr) (int ) = 0;

int toascii (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "toascii");
	validate_NULL_TYPETYPE(arg0, "toascii");
	return funcptr(arg0);
}

int lsb_toascii (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "toascii");
	return funcptr(arg0);
}

