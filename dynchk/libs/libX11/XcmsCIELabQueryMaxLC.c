// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xcms.h>
#undef XcmsCIELabQueryMaxLC
static int(*funcptr) (XcmsCCC , XcmsFloat , XcmsColor * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XcmsCIELabQueryMaxLC (XcmsCCC arg0 , XcmsFloat arg1 , XcmsColor * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XcmsCIELabQueryMaxLC");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XcmsCIELabQueryMaxLC()");
		validate_NULL_TYPETYPE(  arg0, "XcmsCIELabQueryMaxLC - arg0");
		validate_NULL_TYPETYPE(  arg1, "XcmsCIELabQueryMaxLC - arg1");
	validate_RWaddress( arg2, "XcmsCIELabQueryMaxLC - arg2");
		validate_NULL_TYPETYPE(  arg2, "XcmsCIELabQueryMaxLC - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

