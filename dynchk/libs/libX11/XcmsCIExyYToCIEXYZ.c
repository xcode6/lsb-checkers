// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xcms.h>
#undef XcmsCIExyYToCIEXYZ
static int(*funcptr) (XcmsCCC , XcmsColor * , XcmsColor * , unsigned int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XcmsCIExyYToCIEXYZ (XcmsCCC arg0 , XcmsColor * arg1 , XcmsColor * arg2 , unsigned int arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XcmsCIExyYToCIEXYZ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XcmsCIExyYToCIEXYZ()");
		validate_NULL_TYPETYPE(  arg0, "XcmsCIExyYToCIEXYZ - arg0");
	validate_RWaddress( arg1, "XcmsCIExyYToCIEXYZ - arg1");
		validate_NULL_TYPETYPE(  arg1, "XcmsCIExyYToCIEXYZ - arg1");
	validate_RWaddress( arg2, "XcmsCIExyYToCIEXYZ - arg2");
		validate_NULL_TYPETYPE(  arg2, "XcmsCIExyYToCIEXYZ - arg2");
		validate_NULL_TYPETYPE(  arg3, "XcmsCIExyYToCIEXYZ - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

