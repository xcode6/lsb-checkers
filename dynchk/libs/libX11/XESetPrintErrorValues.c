// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)() = 0;

int XESetPrintErrorValues()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XESetPrintErrorValues");
	return funcptr();
}

int __lsb_XESetPrintErrorValues()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XESetPrintErrorValues");
	return funcptr();
}

