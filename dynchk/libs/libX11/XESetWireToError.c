// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)() = 0;

int XESetWireToError()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XESetWireToError");
	return funcptr();
}

int __lsb_XESetWireToError()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XESetWireToError");
	return funcptr();
}

