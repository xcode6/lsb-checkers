// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unistd.h>
#undef sethostid
static int(*funcptr) (long ) = 0;

int sethostid (long arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sethostid");
	validate_NULL_TYPETYPE(arg0, "sethostid");
	return funcptr(arg0);
}

int lsb_sethostid (long arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sethostid");
	return funcptr(arg0);
}

