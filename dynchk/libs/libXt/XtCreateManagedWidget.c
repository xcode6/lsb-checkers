// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#include <X11/Intrinsic.h>
#include <X11/Intrinsic.h>
#include <X11/Intrinsic.h>
static int(*funcptr)(char *, WidgetClass, Widget, ArgList, Cardinal) = 0;

Widget XtCreateManagedWidget(char * arg0, WidgetClass arg1, Widget arg2, ArgList arg3, Cardinal arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtCreateManagedWidget");
	validate_NULL_TYPETYPE(arg0, "XtCreateManagedWidget");
	validate_NULL_TYPETYPE(arg1, "XtCreateManagedWidget");
	validate_NULL_TYPETYPE(arg2, "XtCreateManagedWidget");
	validate_NULL_TYPETYPE(arg3, "XtCreateManagedWidget");
	validate_NULL_TYPETYPE(arg4, "XtCreateManagedWidget");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

Widget __lsb_XtCreateManagedWidget(char * arg0, WidgetClass arg1, Widget arg2, ArgList arg3, Cardinal arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtCreateManagedWidget");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

