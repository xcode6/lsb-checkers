// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)() = 0;

Boolean XtIsShell()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtIsShell");
	return funcptr();
}

Boolean __lsb_XtIsShell()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtIsShell");
	return funcptr();
}

