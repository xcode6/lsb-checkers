// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <X11/Xlib.h>
#include <X11/extensions/dpms.h>
#undef DPMSQueryExtension
static int(*funcptr) (Display * , int * , int * ) = 0;

extern int __lsb_check_params;
int DPMSQueryExtension (Display * arg0 , int * arg1 , int * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "DPMSQueryExtension");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "DPMSQueryExtension()");
		validate_RWaddress( arg0, "DPMSQueryExtension - arg0");
		validate_NULL_TYPETYPE(  arg0, "DPMSQueryExtension - arg0");
		validate_RWaddress( arg1, "DPMSQueryExtension - arg1");
		validate_NULL_TYPETYPE(  arg1, "DPMSQueryExtension - arg1");
		validate_RWaddress( arg2, "DPMSQueryExtension - arg2");
		validate_NULL_TYPETYPE(  arg2, "DPMSQueryExtension - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

