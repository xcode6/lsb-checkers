// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#include <wchar.h>
#undef getwc
static wint_t(*funcptr) (FILE * ) = 0;

wint_t getwc (FILE * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getwc");
	validate_NULL_TYPETYPE(arg0, "getwc");
	return funcptr(arg0);
}

wint_t lsb_getwc (FILE * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getwc");
	return funcptr(arg0);
}

