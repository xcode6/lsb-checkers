// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <wchar.h>
#undef wmemset
static wchar_t *(*funcptr) (wchar_t * , wchar_t , size_t ) = 0;

wchar_t * wmemset (wchar_t * arg0 , wchar_t arg1 , size_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wmemset");
	validate_Rdaddress( arg0, "wmemset");
	validate_NULL_TYPETYPE(  arg0, "wmemset");
	validate_NULL_TYPETYPE(  arg1, "wmemset");
	validate_NULL_TYPETYPE(  arg2, "wmemset");
	return funcptr(arg0, arg1, arg2);
}

wchar_t * __lsb_wmemset (wchar_t * arg0 , wchar_t arg1 , size_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wmemset");
	return funcptr(arg0, arg1, arg2);
}

