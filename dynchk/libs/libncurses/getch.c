// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef getch
static int(*funcptr) () = 0;

int getch ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getch");
	return funcptr();
}

int lsb_getch ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getch");
	return funcptr();
}

