// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <stdarg.h>
#include <wchar.h>
#undef vwscanf
static int(*funcptr) (const wchar_t * , va_list ) = 0;

int vwscanf (const wchar_t * arg0 , va_list arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vwscanf");
	validate_NULL_TYPETYPE(arg0, "vwscanf");
	validate_NULL_TYPETYPE(arg1, "vwscanf");
	return funcptr(arg0, arg1);
}

int lsb_vwscanf (const wchar_t * arg0 , va_list arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vwscanf");
	return funcptr(arg0, arg1);
}

