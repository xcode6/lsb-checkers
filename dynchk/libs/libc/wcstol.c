// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <wchar.h>
#undef wcstol
static long(*funcptr) (const wchar_t * , wchar_t * * , int ) = 0;

long wcstol (const wchar_t * arg0 , wchar_t * * arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcstol");
	validate_Rdaddress( arg0, "wcstol");
	validate_NULL_TYPETYPE(  arg0, "wcstol");
	validate_Rdaddress( arg1, "wcstol");
	validate_Rdaddress(* arg1, "wcstol");
	validate_NULL_TYPETYPE(  arg1, "wcstol");
	validate_NULL_TYPETYPE(  arg2, "wcstol");
	return funcptr(arg0, arg1, arg2);
}

long __lsb_wcstol (const wchar_t * arg0 , wchar_t * * arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcstol");
	return funcptr(arg0, arg1, arg2);
}

