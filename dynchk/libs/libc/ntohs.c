// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <inttypes.h>
#include <netinet/in.h>
#undef ntohs
static uint16_t(*funcptr) (uint16_t ) = 0;

uint16_t ntohs (uint16_t arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ntohs");
	validate_NULL_TYPETYPE(  arg0, "ntohs");
	return funcptr(arg0);
}

uint16_t __lsb_ntohs (uint16_t arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ntohs");
	return funcptr(arg0);
}

