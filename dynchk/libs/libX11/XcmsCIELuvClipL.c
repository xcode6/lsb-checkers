// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xcms.h>
#undef XcmsCIELuvClipL
static int(*funcptr) (XcmsCCC , XcmsColor * , unsigned int , unsigned int , int * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XcmsCIELuvClipL (XcmsCCC arg0 , XcmsColor * arg1 , unsigned int arg2 , unsigned int arg3 , int * arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XcmsCIELuvClipL");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XcmsCIELuvClipL()");
		validate_NULL_TYPETYPE(  arg0, "XcmsCIELuvClipL - arg0");
	validate_Rdaddress( arg1, "XcmsCIELuvClipL - arg1");
		validate_NULL_TYPETYPE(  arg1, "XcmsCIELuvClipL - arg1");
		validate_NULL_TYPETYPE(  arg2, "XcmsCIELuvClipL - arg2");
		validate_NULL_TYPETYPE(  arg3, "XcmsCIELuvClipL - arg3");
	validate_Rdaddress( arg4, "XcmsCIELuvClipL - arg4");
		validate_NULL_TYPETYPE(  arg4, "XcmsCIELuvClipL - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

