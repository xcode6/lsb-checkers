// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef __wcstod_internal
static double(*funcptr) (wchar_t * , wchar_t * * , int ) = 0;

double __wcstod_internal (wchar_t * arg0 , wchar_t * * arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__wcstod_internal");
	validate_NULL_TYPETYPE(arg0, "__wcstod_internal");
	validate_NULL_TYPETYPE(arg1, "__wcstod_internal");
	validate_NULL_TYPETYPE(arg2, "__wcstod_internal");
	return funcptr(arg0, arg1, arg2);
}

double lsb___wcstod_internal (wchar_t * arg0 , wchar_t * * arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__wcstod_internal");
	return funcptr(arg0, arg1, arg2);
}

