// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
#undef setgid
static int(*funcptr) (gid_t ) = 0;

int setgid (gid_t arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setgid");
	validate_NULL_TYPETYPE(arg0, "setgid");
	return funcptr(arg0);
}

int lsb_setgid (gid_t arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setgid");
	return funcptr(arg0);
}

