// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unistd.h>
#undef dup
static int(*funcptr) (int ) = 0;

int dup (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "dup");
	validate_NULL_TYPETYPE(arg0, "dup");
	return funcptr(arg0);
}

int lsb_dup (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "dup");
	return funcptr(arg0);
}

