// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
static int(*funcptr)(Display *, Window, int, int, int) = 0;

void XShapeOffsetShape(Display * arg0, Window arg1, int arg2, int arg3, int arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XShapeOffsetShape");
	validate_NULL_TYPETYPE(arg0, "XShapeOffsetShape");
	validate_NULL_TYPETYPE(arg1, "XShapeOffsetShape");
	validate_NULL_TYPETYPE(arg2, "XShapeOffsetShape");
	validate_NULL_TYPETYPE(arg3, "XShapeOffsetShape");
	validate_NULL_TYPETYPE(arg4, "XShapeOffsetShape");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

void __lsb_XShapeOffsetShape(Display * arg0, Window arg1, int arg2, int arg3, int arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XShapeOffsetShape");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

