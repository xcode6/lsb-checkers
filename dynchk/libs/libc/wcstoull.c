// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <wchar.h>
#undef wcstoull
static unsigned long long(*funcptr) (const wchar_t * , wchar_t * * , int ) = 0;

unsigned long long wcstoull (const wchar_t * arg0 , wchar_t * * arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcstoull");
	validate_Rdaddress( arg0, "wcstoull");
	validate_NULL_TYPETYPE(  arg0, "wcstoull");
	validate_Rdaddress( arg1, "wcstoull");
	validate_Rdaddress(* arg1, "wcstoull");
	validate_NULL_TYPETYPE(  arg1, "wcstoull");
	validate_NULL_TYPETYPE(  arg2, "wcstoull");
	return funcptr(arg0, arg1, arg2);
}

unsigned long long __lsb_wcstoull (const wchar_t * arg0 , wchar_t * * arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcstoull");
	return funcptr(arg0, arg1, arg2);
}

