// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/SM/SMlib.h>
static int(*funcptr)(SmsConn) = 0;

void SmsDie(SmsConn arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmsDie");
	validate_NULL_TYPETYPE(arg0, "SmsDie");
	return funcptr(arg0);
}

void __lsb_SmsDie(SmsConn arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmsDie");
	return funcptr(arg0);
}

