// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef realpath
static char *(*funcptr) (const char * , char * ) = 0;

char * realpath (const char * arg0 , char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "realpath");
	validate_NULL_TYPETYPE(arg0, "realpath");
	validate_NULL_TYPETYPE(arg1, "realpath");
	return funcptr(arg0, arg1);
}

char * lsb_realpath (const char * arg0 , char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "realpath");
	return funcptr(arg0, arg1);
}

