// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#undef tmpfile
static FILE *(*funcptr) () = 0;

FILE * tmpfile ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tmpfile");
	return funcptr();
}

FILE * __lsb_tmpfile ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tmpfile");
	return funcptr();
}

