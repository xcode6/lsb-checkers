// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef wcstoq
static long long(*funcptr) (const wchar_t * , wchar_t * , int ) = 0;

long long wcstoq (const wchar_t * arg0 , wchar_t * arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcstoq");
	validate_NULL_TYPETYPE(arg0, "wcstoq");
	validate_NULL_TYPETYPE(arg1, "wcstoq");
	validate_NULL_TYPETYPE(arg2, "wcstoq");
	return funcptr(arg0, arg1, arg2);
}

long long lsb_wcstoq (const wchar_t * arg0 , wchar_t * arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcstoq");
	return funcptr(arg0, arg1, arg2);
}

