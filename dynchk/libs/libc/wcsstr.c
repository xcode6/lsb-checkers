// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#undef wcsstr
static wchar_t *(*funcptr) (const wchar_t * , const wchar_t * ) = 0;

wchar_t * wcsstr (const wchar_t * arg0 , const wchar_t * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcsstr");
	validate_NULL_TYPETYPE(arg0, "wcsstr");
	validate_NULL_TYPETYPE(arg1, "wcsstr");
	return funcptr(arg0, arg1);
}

wchar_t * lsb_wcsstr (const wchar_t * arg0 , const wchar_t * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcsstr");
	return funcptr(arg0, arg1);
}

