// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#undef fgetws
static wchar_t *(*funcptr) (wchar_t * , int , FILE * ) = 0;

wchar_t * fgetws (wchar_t * arg0 , int arg1 , FILE * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fgetws");
	validate_NULL_TYPETYPE(arg0, "fgetws");
	validate_NULL_TYPETYPE(arg1, "fgetws");
	validate_NULL_TYPETYPE(arg2, "fgetws");
	return funcptr(arg0, arg1, arg2);
}

wchar_t * lsb_fgetws (wchar_t * arg0 , int arg1 , FILE * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fgetws");
	return funcptr(arg0, arg1, arg2);
}

