// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef dlerror
static char *(*funcptr) () = 0;

#if 0
char * dlerror ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "dlerror");
	return funcptr();
}
#endif

char * __lsb_dlerror ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "dlerror");
	return funcptr();
}

