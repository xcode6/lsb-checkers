// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <libgen.h>
#undef dirname
static char *(*funcptr) (char * ) = 0;

char * dirname (char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "dirname");
	validate_Rdaddress( arg0, "dirname");
	validate_NULL_TYPETYPE(  arg0, "dirname");
	return funcptr(arg0);
}

char * __lsb_dirname (char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "dirname");
	return funcptr(arg0);
}

