// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef ngettext
static char *(*funcptr) (const char * , const char * , unsigned long ) = 0;

char * ngettext (const char * arg0 , const char * arg1 , unsigned long arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ngettext");
	validate_NULL_TYPETYPE(arg0, "ngettext");
	validate_NULL_TYPETYPE(arg1, "ngettext");
	validate_NULL_TYPETYPE(arg2, "ngettext");
	return funcptr(arg0, arg1, arg2);
}

char * lsb_ngettext (const char * arg0 , const char * arg1 , unsigned long arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ngettext");
	return funcptr(arg0, arg1, arg2);
}

