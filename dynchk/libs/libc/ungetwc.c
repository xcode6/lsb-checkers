// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <wctype.h>
#include <stdio.h>
#include <wchar.h>
#undef ungetwc
static wint_t(*funcptr) (wint_t , FILE * ) = 0;

wint_t ungetwc (wint_t arg0 , FILE * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ungetwc");
	validate_NULL_TYPETYPE(arg0, "ungetwc");
	validate_NULL_TYPETYPE(arg1, "ungetwc");
	return funcptr(arg0, arg1);
}

wint_t lsb_ungetwc (wint_t arg0 , FILE * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ungetwc");
	return funcptr(arg0, arg1);
}

