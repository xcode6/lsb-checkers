// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#undef XtGetResourceList
static void(*funcptr) (WidgetClass , XtResourceList * , Cardinal * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void XtGetResourceList (WidgetClass arg0 , XtResourceList * arg1 , Cardinal * arg2 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtGetResourceList");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XtGetResourceList()");
		validate_NULL_TYPETYPE(  arg0, "XtGetResourceList - arg0");
	validate_RWaddress( arg1, "XtGetResourceList - arg1");
		validate_NULL_TYPETYPE(  arg1, "XtGetResourceList - arg1");
	validate_RWaddress( arg2, "XtGetResourceList - arg2");
		validate_NULL_TYPETYPE(  arg2, "XtGetResourceList - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

