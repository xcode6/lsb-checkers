// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <stdlib.h>
#undef mbtowc
static int(*funcptr) (wchar_t * , const char * , size_t ) = 0;

int mbtowc (wchar_t * arg0 , const char * arg1 , size_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mbtowc");
	validate_NULL_TYPETYPE(arg0, "mbtowc");
	validate_NULL_TYPETYPE(arg1, "mbtowc");
	validate_NULL_TYPETYPE(arg2, "mbtowc");
	return funcptr(arg0, arg1, arg2);
}

int lsb_mbtowc (wchar_t * arg0 , const char * arg1 , size_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mbtowc");
	return funcptr(arg0, arg1, arg2);
}

