// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XRotateWindowProperties
static int(*funcptr) (Display * , Window , Atom * , int , int ) = 0;

extern int __lsb_check_params;
int XRotateWindowProperties (Display * arg0 , Window arg1 , Atom * arg2 , int arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XRotateWindowProperties()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XRotateWindowProperties");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XRotateWindowProperties. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XRotateWindowProperties() - validating");
		validate_RWaddress( arg0, "XRotateWindowProperties - arg0");
		validate_NULL_TYPETYPE(  arg0, "XRotateWindowProperties - arg0");
		validate_NULL_TYPETYPE(  arg1, "XRotateWindowProperties - arg1");
		validate_RWaddress( arg2, "XRotateWindowProperties - arg2");
		validate_NULL_TYPETYPE(  arg2, "XRotateWindowProperties - arg2");
		validate_NULL_TYPETYPE(  arg3, "XRotateWindowProperties - arg3");
		validate_NULL_TYPETYPE(  arg4, "XRotateWindowProperties - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

