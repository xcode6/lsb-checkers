// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#undef XFindOnExtensionList
static XExtData *(*funcptr) (XExtData * * , int ) = 0;

extern int __lsb_check_params;
XExtData * XFindOnExtensionList (XExtData * * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	XExtData * ret_value  ;
	__lsb_output(4, "Invoking wrapper for XFindOnExtensionList()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XFindOnExtensionList");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XFindOnExtensionList. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XFindOnExtensionList() - validating");
		validate_RWaddress( arg0, "XFindOnExtensionList - arg0");
		validate_NULL_TYPETYPE(  arg0, "XFindOnExtensionList - arg0");
		validate_NULL_TYPETYPE(  arg1, "XFindOnExtensionList - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

