// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/extensions/dpms.h>
#undef DPMSGetVersion
static int(*funcptr) (Display * , int * , int * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int DPMSGetVersion (Display * arg0 , int * arg1 , int * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "DPMSGetVersion");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "DPMSGetVersion()");
	validate_RWaddress( arg0, "DPMSGetVersion - arg0");
		validate_NULL_TYPETYPE(  arg0, "DPMSGetVersion - arg0");
	validate_RWaddress( arg1, "DPMSGetVersion - arg1");
		validate_NULL_TYPETYPE(  arg1, "DPMSGetVersion - arg1");
	validate_RWaddress( arg2, "DPMSGetVersion - arg2");
		validate_NULL_TYPETYPE(  arg2, "DPMSGetVersion - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

