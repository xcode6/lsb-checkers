// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)() = 0;

int XESetBeforeFlush()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XESetBeforeFlush");
	return funcptr();
}

int __lsb_XESetBeforeFlush()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XESetBeforeFlush");
	return funcptr();
}

