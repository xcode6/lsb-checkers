// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef gai_strerror
static const char *(*funcptr) (int ) = 0;

const char * gai_strerror (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gai_strerror");
	validate_NULL_TYPETYPE(arg0, "gai_strerror");
	return funcptr(arg0);
}

const char * lsb_gai_strerror (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gai_strerror");
	return funcptr(arg0);
}

