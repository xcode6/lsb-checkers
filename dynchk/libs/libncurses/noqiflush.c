// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef noqiflush
static void(*funcptr) () = 0;

void noqiflush ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "noqiflush");
	funcptr();
}

void lsb_noqiflush ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "noqiflush");
	funcptr();
}

