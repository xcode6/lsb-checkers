// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <nl_types.h>
#undef catopen
static nl_catd(*funcptr) (const char * , int ) = 0;

nl_catd catopen (const char * arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "catopen");
	validate_NULL_TYPETYPE(arg0, "catopen");
	validate_NULL_TYPETYPE(arg1, "catopen");
	return funcptr(arg0, arg1);
}

nl_catd lsb_catopen (const char * arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "catopen");
	return funcptr(arg0, arg1);
}

