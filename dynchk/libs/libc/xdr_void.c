// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef xdr_void
static bool_t(*funcptr) () = 0;

bool_t xdr_void ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_void");
	return funcptr();
}

bool_t lsb_xdr_void ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_void");
	return funcptr();
}

