// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XDeleteProperty
static int(*funcptr) (Display * , Window , Atom ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XDeleteProperty (Display * arg0 , Window arg1 , Atom arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XDeleteProperty");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XDeleteProperty()");
	validate_Rdaddress( arg0, "XDeleteProperty - arg0");
		validate_NULL_TYPETYPE(  arg0, "XDeleteProperty - arg0");
		validate_NULL_TYPETYPE(  arg1, "XDeleteProperty - arg1");
		validate_NULL_TYPETYPE(  arg2, "XDeleteProperty - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

