// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcStrListNext
static FcChar8 *(*funcptr) (FcStrList * ) = 0;

extern int __lsb_check_params;
FcChar8 * FcStrListNext (FcStrList * arg0 )
{
	int reset_flag = __lsb_check_params;
	FcChar8 * ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcStrListNext()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcStrListNext");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcStrListNext. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcStrListNext() - validating");
		validate_RWaddress( arg0, "FcStrListNext - arg0 (list)");
		validate_NULL_TYPETYPE(  arg0, "FcStrListNext - arg0 (list)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

