// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef closedir
static int(*funcptr) (DIR * ) = 0;

int closedir (DIR * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "closedir");
	validate_NULL_TYPETYPE(arg0, "closedir");
	return funcptr(arg0);
}

int lsb_closedir (DIR * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "closedir");
	return funcptr(arg0);
}

