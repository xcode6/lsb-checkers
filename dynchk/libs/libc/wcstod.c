// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <wchar.h>
#undef wcstod
static double(*funcptr) (const wchar_t * , wchar_t * * ) = 0;

double wcstod (const wchar_t * arg0 , wchar_t * * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcstod");
	validate_Rdaddress( arg0, "wcstod");
	validate_NULL_TYPETYPE(  arg0, "wcstod");
	validate_Rdaddress( arg1, "wcstod");
	validate_Rdaddress(* arg1, "wcstod");
	validate_NULL_TYPETYPE(  arg1, "wcstod");
	return funcptr(arg0, arg1);
}

double __lsb_wcstod (const wchar_t * arg0 , wchar_t * * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcstod");
	return funcptr(arg0, arg1);
}

