// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/ICE/ICElib.h>
#include <X11/ICE/ICElib.h>
static int(*funcptr)(IceWatchProc, IcePointer) = 0;

int IceAddConnectionWatch(IceWatchProc arg0, IcePointer arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceAddConnectionWatch");
	validate_NULL_TYPETYPE(arg0, "IceAddConnectionWatch");
	validate_NULL_TYPETYPE(arg1, "IceAddConnectionWatch");
	return funcptr(arg0, arg1);
}

int __lsb_IceAddConnectionWatch(IceWatchProc arg0, IcePointer arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceAddConnectionWatch");
	return funcptr(arg0, arg1);
}

