// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xcms.h>
#undef XcmsCIELuvQueryMaxLC
static int(*funcptr) (XcmsCCC , XcmsFloat , XcmsColor * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XcmsCIELuvQueryMaxLC (XcmsCCC arg0 , XcmsFloat arg1 , XcmsColor * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XcmsCIELuvQueryMaxLC");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XcmsCIELuvQueryMaxLC()");
		validate_NULL_TYPETYPE(  arg0, "XcmsCIELuvQueryMaxLC - arg0");
		validate_NULL_TYPETYPE(  arg1, "XcmsCIELuvQueryMaxLC - arg1");
	validate_Rdaddress( arg2, "XcmsCIELuvQueryMaxLC - arg2");
		validate_NULL_TYPETYPE(  arg2, "XcmsCIELuvQueryMaxLC - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

