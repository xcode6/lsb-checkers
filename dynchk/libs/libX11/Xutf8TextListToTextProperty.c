// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#undef Xutf8TextListToTextProperty
static int(*funcptr) (Display * , char * * , int , XICCEncodingStyle , XTextProperty * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int Xutf8TextListToTextProperty (Display * arg0 , char * * arg1 , int arg2 , XICCEncodingStyle arg3 , XTextProperty * arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "Xutf8TextListToTextProperty");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "Xutf8TextListToTextProperty()");
	validate_Rdaddress( arg0, "Xutf8TextListToTextProperty - arg0");
		validate_NULL_TYPETYPE(  arg0, "Xutf8TextListToTextProperty - arg0");
	validate_Rdaddress( arg1, "Xutf8TextListToTextProperty - arg1");
	validate_Rdaddress(* arg1, "Xutf8TextListToTextProperty - arg1");
		validate_NULL_TYPETYPE(  arg1, "Xutf8TextListToTextProperty - arg1");
		validate_NULL_TYPETYPE(  arg2, "Xutf8TextListToTextProperty - arg2");
		validate_NULL_TYPETYPE(  arg3, "Xutf8TextListToTextProperty - arg3");
	validate_Rdaddress( arg4, "Xutf8TextListToTextProperty - arg4");
		validate_NULL_TYPETYPE(  arg4, "Xutf8TextListToTextProperty - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

