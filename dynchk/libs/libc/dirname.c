// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef dirname
static char *(*funcptr) (const char * ) = 0;

char * dirname (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "dirname");
	validate_NULL_TYPETYPE(arg0, "dirname");
	return funcptr(arg0);
}

char * lsb_dirname (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "dirname");
	return funcptr(arg0);
}

