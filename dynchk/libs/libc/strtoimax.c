// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <inttypes.h>
#undef strtoimax
static intmax_t(*funcptr) (const char * , char * * , int ) = 0;

intmax_t strtoimax (const char * arg0 , char * * arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strtoimax");
	validate_NULL_TYPETYPE(arg0, "strtoimax");
	validate_NULL_TYPETYPE(arg1, "strtoimax");
	validate_NULL_TYPETYPE(arg2, "strtoimax");
	return funcptr(arg0, arg1, arg2);
}

intmax_t lsb_strtoimax (const char * arg0 , char * * arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strtoimax");
	return funcptr(arg0, arg1, arg2);
}

