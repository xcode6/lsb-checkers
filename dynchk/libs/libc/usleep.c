// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
#include <unistd.h>
#undef usleep
static int(*funcptr) (useconds_t ) = 0;

int usleep (useconds_t arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "usleep");
	validate_NULL_TYPETYPE(  arg0, "usleep");
	return funcptr(arg0);
}

int __lsb_usleep (useconds_t arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "usleep");
	return funcptr(arg0);
}

