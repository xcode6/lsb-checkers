// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <lsb/Intrinsic.h>
#include <X11/Intrinsic.h>
#undef XtGetResourceList
static void(*funcptr) (WidgetClass , XtResourceList * , Cardinal * ) = 0;

extern int __lsb_check_params;
void XtGetResourceList (WidgetClass arg0 , XtResourceList * arg1 , Cardinal * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XtGetResourceList()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtGetResourceList");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtGetResourceList. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtGetResourceList() - validating");
		validate_NULL_TYPETYPE(  arg0, "XtGetResourceList - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "XtGetResourceList - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "XtGetResourceList - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "XtGetResourceList - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "XtGetResourceList - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

