// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/ICE/ICElib.h>
static int(*funcptr)(IceConn) = 0;

int IceProtocolRevision(IceConn arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceProtocolRevision");
	validate_NULL_TYPETYPE(arg0, "IceProtocolRevision");
	return funcptr(arg0);
}

int __lsb_IceProtocolRevision(IceConn arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceProtocolRevision");
	return funcptr(arg0);
}

