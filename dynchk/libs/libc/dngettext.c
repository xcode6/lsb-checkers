// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <libintl.h>
#undef dngettext
static char *(*funcptr) (const char * , const char * , const char * , unsigned long ) = 0;

char * dngettext (const char * arg0 , const char * arg1 , const char * arg2 , unsigned long arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "dngettext");
	validate_Rdaddress( arg0, "dngettext");
	validate_NULL_TYPETYPE(  arg0, "dngettext");
	validate_Rdaddress( arg1, "dngettext");
	validate_NULL_TYPETYPE(  arg1, "dngettext");
	validate_Rdaddress( arg2, "dngettext");
	validate_NULL_TYPETYPE(  arg2, "dngettext");
	validate_NULL_TYPETYPE(  arg3, "dngettext");
	return funcptr(arg0, arg1, arg2, arg3);
}

char * __lsb_dngettext (const char * arg0 , const char * arg1 , const char * arg2 , unsigned long arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "dngettext");
	return funcptr(arg0, arg1, arg2, arg3);
}

