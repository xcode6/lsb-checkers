// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <wchar.h>
#undef wcsnrtombs
static size_t(*funcptr) (char * , const wchar_t * * , size_t , size_t , mbstate_t * ) = 0;

size_t wcsnrtombs (char * arg0 , const wchar_t * * arg1 , size_t arg2 , size_t arg3 , mbstate_t * arg4 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcsnrtombs");
	validate_NULL_TYPETYPE(arg0, "wcsnrtombs");
	validate_NULL_TYPETYPE(arg1, "wcsnrtombs");
	validate_NULL_TYPETYPE(arg2, "wcsnrtombs");
	validate_NULL_TYPETYPE(arg3, "wcsnrtombs");
	validate_NULL_TYPETYPE(arg4, "wcsnrtombs");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

size_t lsb_wcsnrtombs (char * arg0 , const wchar_t * * arg1 , size_t arg2 , size_t arg3 , mbstate_t * arg4 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcsnrtombs");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

