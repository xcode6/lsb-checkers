// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/extensions/XKBgeom.h>
static int(*funcptr)(XkbOverlayRowPtr, int) = 0;

int XkbAllocGeomOverlayKeys(XkbOverlayRowPtr arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbAllocGeomOverlayKeys");
	validate_NULL_TYPETYPE(arg0, "XkbAllocGeomOverlayKeys");
	validate_NULL_TYPETYPE(arg1, "XkbAllocGeomOverlayKeys");
	return funcptr(arg0, arg1);
}

int __lsb_XkbAllocGeomOverlayKeys(XkbOverlayRowPtr arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbAllocGeomOverlayKeys");
	return funcptr(arg0, arg1);
}

