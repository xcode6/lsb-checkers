// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/ICE/ICElib.h>
static int(*funcptr)(IceConn) = 0;

IcePointer IceGetConnectionContext(IceConn arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceGetConnectionContext");
	validate_NULL_TYPETYPE(arg0, "IceGetConnectionContext");
	return funcptr(arg0);
}

IcePointer __lsb_IceGetConnectionContext(IceConn arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceGetConnectionContext");
	return funcptr(arg0);
}

