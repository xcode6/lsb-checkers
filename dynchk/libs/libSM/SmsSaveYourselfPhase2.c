// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/SM/SMlib.h>
static int(*funcptr)(SmsConn) = 0;

void SmsSaveYourselfPhase2(SmsConn arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmsSaveYourselfPhase2");
	validate_NULL_TYPETYPE(arg0, "SmsSaveYourselfPhase2");
	return funcptr(arg0);
}

void __lsb_SmsSaveYourselfPhase2(SmsConn arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmsSaveYourselfPhase2");
	return funcptr(arg0);
}

