// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
static int(*funcptr)(FILE) = 0;

IceAuthFileEntry * IceReadAuthFileEntry(FILE arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceReadAuthFileEntry");
	validate_NULL_TYPETYPE(arg0, "IceReadAuthFileEntry");
	return funcptr(arg0);
}

IceAuthFileEntry * __lsb_IceReadAuthFileEntry(FILE arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceReadAuthFileEntry");
	return funcptr(arg0);
}

