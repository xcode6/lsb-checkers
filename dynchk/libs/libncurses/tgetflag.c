// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <term.h>
#undef tgetflag
static int(*funcptr) (char * ) = 0;

int tgetflag (char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tgetflag");
	validate_NULL_TYPETYPE(arg0, "tgetflag");
	return funcptr(arg0);
}

int lsb_tgetflag (char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tgetflag");
	return funcptr(arg0);
}

