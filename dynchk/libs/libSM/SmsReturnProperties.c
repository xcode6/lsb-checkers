// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/SM/SMlib.h>
static int(*funcptr)(SmsConn, int, SmProp * *) = 0;

void SmsReturnProperties(SmsConn arg0, int arg1, SmProp * * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmsReturnProperties");
	validate_NULL_TYPETYPE(arg0, "SmsReturnProperties");
	validate_NULL_TYPETYPE(arg1, "SmsReturnProperties");
	validate_NULL_TYPETYPE(arg2, "SmsReturnProperties");
	return funcptr(arg0, arg1, arg2);
}

void __lsb_SmsReturnProperties(SmsConn arg0, int arg1, SmProp * * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmsReturnProperties");
	return funcptr(arg0, arg1, arg2);
}

