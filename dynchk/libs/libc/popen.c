// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#undef popen
static FILE *(*funcptr) (const char * , const char * ) = 0;

FILE * popen (const char * arg0 , const char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "popen");
	validate_NULL_TYPETYPE(arg0, "popen");
	validate_NULL_TYPETYPE(arg1, "popen");
	return funcptr(arg0, arg1);
}

FILE * lsb_popen (const char * arg0 , const char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "popen");
	return funcptr(arg0, arg1);
}

