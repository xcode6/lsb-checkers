// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <wchar.h>
#undef wcsspn
static size_t(*funcptr) (const wchar_t * , const wchar_t * ) = 0;

size_t wcsspn (const wchar_t * arg0 , const wchar_t * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcsspn");
	validate_NULL_TYPETYPE(arg0, "wcsspn");
	validate_NULL_TYPETYPE(arg1, "wcsspn");
	return funcptr(arg0, arg1);
}

size_t lsb_wcsspn (const wchar_t * arg0 , const wchar_t * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcsspn");
	return funcptr(arg0, arg1);
}

