// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef curs_set
static int(*funcptr) (int ) = 0;

int curs_set (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "curs_set");
	validate_NULL_TYPETYPE(arg0, "curs_set");
	return funcptr(arg0);
}

int lsb_curs_set (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "curs_set");
	return funcptr(arg0);
}

