// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#undef tmpfile64
static FILE *(*funcptr) () = 0;

FILE * tmpfile64 ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tmpfile64");
	return funcptr();
}

FILE * lsb_tmpfile64 ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tmpfile64");
	return funcptr();
}

