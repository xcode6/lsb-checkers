// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <stdlib.h>
#undef wctomb
static int(*funcptr) (char * , wchar_t ) = 0;

int wctomb (char * arg0 , wchar_t arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wctomb");
	validate_Rdaddress( arg0, "wctomb");
	validate_NULL_TYPETYPE(  arg0, "wctomb");
	validate_NULL_TYPETYPE(  arg1, "wctomb");
	return funcptr(arg0, arg1);
}

int __lsb_wctomb (char * arg0 , wchar_t arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wctomb");
	return funcptr(arg0, arg1);
}

