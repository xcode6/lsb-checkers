// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XRotateWindowProperties
static int(*funcptr) (Display * , Window , Atom * , int , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XRotateWindowProperties (Display * arg0 , Window arg1 , Atom * arg2 , int arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XRotateWindowProperties");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XRotateWindowProperties()");
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

