// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <string.h>
#undef strdup
static char *(*funcptr) (const char * ) = 0;

char * strdup (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strdup");
	validate_NULL_TYPETYPE(arg0, "strdup");
	return funcptr(arg0);
}

char * lsb_strdup (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strdup");
	return funcptr(arg0);
}

