// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <lsb/Intrinsic.h>
#include <X11/Intrinsic.h>
#undef _XtIsSubclassOf
static Boolean(*funcptr) (Widget , WidgetClass , WidgetClass , unsigned int ) = 0;

extern int __lsb_check_params;
Boolean _XtIsSubclassOf (Widget arg0 , WidgetClass arg1 , WidgetClass arg2 , unsigned int arg3 )
{
	int reset_flag = __lsb_check_params;
	Boolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for _XtIsSubclassOf()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_XtIsSubclassOf");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load _XtIsSubclassOf. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "_XtIsSubclassOf() - validating");
		validate_NULL_TYPETYPE(  arg0, "_XtIsSubclassOf - arg0");
		validate_NULL_TYPETYPE(  arg1, "_XtIsSubclassOf - arg1");
		validate_NULL_TYPETYPE(  arg2, "_XtIsSubclassOf - arg2");
		validate_NULL_TYPETYPE(  arg3, "_XtIsSubclassOf - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

