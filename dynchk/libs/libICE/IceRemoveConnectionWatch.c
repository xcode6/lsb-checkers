// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/ICE/ICElib.h>
#include <X11/ICE/ICElib.h>
static int(*funcptr)(IceWatchProc, IcePointer) = 0;

void IceRemoveConnectionWatch(IceWatchProc arg0, IcePointer arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceRemoveConnectionWatch");
	validate_NULL_TYPETYPE(arg0, "IceRemoveConnectionWatch");
	validate_NULL_TYPETYPE(arg1, "IceRemoveConnectionWatch");
	return funcptr(arg0, arg1);
}

void __lsb_IceRemoveConnectionWatch(IceWatchProc arg0, IcePointer arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceRemoveConnectionWatch");
	return funcptr(arg0, arg1);
}

