// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <string.h>
#undef strrchr
static char *(*funcptr) (const char * , int ) = 0;

char * strrchr (const char * arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strrchr");
	validate_Rdaddress( arg0, "strrchr");
	validate_NULL_TYPETYPE(  arg0, "strrchr");
	validate_NULL_TYPETYPE(  arg1, "strrchr");
	return funcptr(arg0, arg1);
}

char * __lsb_strrchr (const char * arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strrchr");
	return funcptr(arg0, arg1);
}

