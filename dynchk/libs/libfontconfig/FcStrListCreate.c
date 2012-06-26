// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcStrListCreate
static FcStrList *(*funcptr) (FcStrSet * ) = 0;

extern int __lsb_check_params;
FcStrList * FcStrListCreate (FcStrSet * arg0 )
{
	int reset_flag = __lsb_check_params;
	FcStrList * ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcStrListCreate()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcStrListCreate");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcStrListCreate. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcStrListCreate() - validating");
		validate_RWaddress( arg0, "FcStrListCreate - arg0 (set)");
		validate_NULL_TYPETYPE(  arg0, "FcStrListCreate - arg0 (set)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

