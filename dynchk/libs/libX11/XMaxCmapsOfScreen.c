// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Screen *) = 0;

int XMaxCmapsOfScreen(Screen * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XMaxCmapsOfScreen");
	validate_NULL_TYPETYPE(arg0, "XMaxCmapsOfScreen");
	return funcptr(arg0);
}

int __lsb_XMaxCmapsOfScreen(Screen * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XMaxCmapsOfScreen");
	return funcptr(arg0);
}

