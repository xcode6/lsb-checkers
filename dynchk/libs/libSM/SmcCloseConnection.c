// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/SM/SMlib.h>
static int(*funcptr)(SmcConn, int, char * *) = 0;

SmcCloseStatus SmcCloseConnection(SmcConn arg0, int arg1, char * * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmcCloseConnection");
	validate_NULL_TYPETYPE(arg0, "SmcCloseConnection");
	validate_NULL_TYPETYPE(arg1, "SmcCloseConnection");
	validate_NULL_TYPETYPE(arg2, "SmcCloseConnection");
	return funcptr(arg0, arg1, arg2);
}

SmcCloseStatus __lsb_SmcCloseConnection(SmcConn arg0, int arg1, char * * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmcCloseConnection");
	return funcptr(arg0, arg1, arg2);
}

