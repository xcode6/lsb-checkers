// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(char *, char *, char *) = 0;

IceAuthFileEntry * IceGetAuthFileEntry(char * arg0, char * arg1, char * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceGetAuthFileEntry");
	validate_NULL_TYPETYPE(arg0, "IceGetAuthFileEntry");
	validate_NULL_TYPETYPE(arg1, "IceGetAuthFileEntry");
	validate_NULL_TYPETYPE(arg2, "IceGetAuthFileEntry");
	return funcptr(arg0, arg1, arg2);
}

IceAuthFileEntry * __lsb_IceGetAuthFileEntry(char * arg0, char * arg1, char * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceGetAuthFileEntry");
	return funcptr(arg0, arg1, arg2);
}

