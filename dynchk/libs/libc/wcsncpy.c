// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#undef wcsncpy
static wchar_t *(*funcptr) (wchar_t * , const wchar_t * , size_t ) = 0;

wchar_t * wcsncpy (wchar_t * arg0 , const wchar_t * arg1 , size_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcsncpy");
	validate_NULL_TYPETYPE(arg0, "wcsncpy");
	validate_NULL_TYPETYPE(arg1, "wcsncpy");
	validate_NULL_TYPETYPE(arg2, "wcsncpy");
	return funcptr(arg0, arg1, arg2);
}

wchar_t * lsb_wcsncpy (wchar_t * arg0 , const wchar_t * arg1 , size_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcsncpy");
	return funcptr(arg0, arg1, arg2);
}

