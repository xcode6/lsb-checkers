// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xcms.h>
#undef XcmsTekHVCQueryMinV
static int(*funcptr) (XcmsCCC , XcmsFloat , XcmsFloat , XcmsColor * ) = 0;

extern int __lsb_check_params;
int XcmsTekHVCQueryMinV (XcmsCCC arg0 , XcmsFloat arg1 , XcmsFloat arg2 , XcmsColor * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XcmsTekHVCQueryMinV ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XcmsTekHVCQueryMinV()");
		validate_NULL_TYPETYPE(  arg0, "XcmsTekHVCQueryMinV - arg0");
		validate_NULL_TYPETYPE(  arg1, "XcmsTekHVCQueryMinV - arg1");
		validate_NULL_TYPETYPE(  arg2, "XcmsTekHVCQueryMinV - arg2");
		validate_RWaddress( arg3, "XcmsTekHVCQueryMinV - arg3");
		validate_NULL_TYPETYPE(  arg3, "XcmsTekHVCQueryMinV - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

