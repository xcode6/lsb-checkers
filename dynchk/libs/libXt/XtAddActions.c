// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#include <X11/Intrinsic.h>
static int(*funcptr)(XtActionList, Cardinal) = 0;

void XtAddActions(XtActionList arg0, Cardinal arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtAddActions");
	validate_NULL_TYPETYPE(arg0, "XtAddActions");
	validate_NULL_TYPETYPE(arg1, "XtAddActions");
	return funcptr(arg0, arg1);
}

void __lsb_XtAddActions(XtActionList arg0, Cardinal arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtAddActions");
	return funcptr(arg0, arg1);
}

