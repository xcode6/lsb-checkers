// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/extensions/XKBgeom.h>
static int(*funcptr)(XkbSectionPtr, int) = 0;

int XkbAllocGeomSectionDoodads(XkbSectionPtr arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbAllocGeomSectionDoodads");
	validate_NULL_TYPETYPE(arg0, "XkbAllocGeomSectionDoodads");
	validate_NULL_TYPETYPE(arg1, "XkbAllocGeomSectionDoodads");
	return funcptr(arg0, arg1);
}

int __lsb_XkbAllocGeomSectionDoodads(XkbSectionPtr arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbAllocGeomSectionDoodads");
	return funcptr(arg0, arg1);
}

