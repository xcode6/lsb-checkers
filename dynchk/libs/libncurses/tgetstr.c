// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef tgetstr
static char *(*funcptr) (const char * , char * * ) = 0;

char * tgetstr (const char * arg0 , char * * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tgetstr");
	validate_NULL_TYPETYPE(arg0, "tgetstr");
	validate_NULL_TYPETYPE(arg1, "tgetstr");
	return funcptr(arg0, arg1);
}

char * lsb_tgetstr (const char * arg0 , char * * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tgetstr");
	return funcptr(arg0, arg1);
}

