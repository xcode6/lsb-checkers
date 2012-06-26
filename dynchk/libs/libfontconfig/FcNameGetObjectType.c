// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcNameGetObjectType
static const FcObjectType *(*funcptr) (const char * ) = 0;

extern int __lsb_check_params;
const FcObjectType * FcNameGetObjectType (const char * arg0 )
{
	int reset_flag = __lsb_check_params;
	const FcObjectType * ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcNameGetObjectType()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcNameGetObjectType");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcNameGetObjectType. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcNameGetObjectType() - validating");
		validate_Rdaddress( arg0, "FcNameGetObjectType - arg0 (object)");
		validate_NULL_TYPETYPE(  arg0, "FcNameGetObjectType - arg0 (object)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

