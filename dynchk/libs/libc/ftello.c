// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#undef ftello
static off_t(*funcptr) (FILE * ) = 0;

off_t ftello (FILE * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ftello");
	validate_Rdaddress( arg0, "ftello");
	validate_NULL_TYPETYPE(  arg0, "ftello");
	return funcptr(arg0);
}

off_t __lsb_ftello (FILE * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ftello");
	return funcptr(arg0);
}

