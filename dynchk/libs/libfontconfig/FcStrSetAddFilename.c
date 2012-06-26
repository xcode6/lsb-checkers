// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcStrSetAddFilename
static FcBool(*funcptr) (FcStrSet * , const FcChar8 * ) = 0;

extern int __lsb_check_params;
FcBool FcStrSetAddFilename (FcStrSet * arg0 , const FcChar8 * arg1 )
{
	int reset_flag = __lsb_check_params;
	FcBool ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcStrSetAddFilename()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcStrSetAddFilename");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcStrSetAddFilename. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcStrSetAddFilename() - validating");
		validate_RWaddress( arg0, "FcStrSetAddFilename - arg0 (set)");
		validate_NULL_TYPETYPE(  arg0, "FcStrSetAddFilename - arg0 (set)");
		validate_Rdaddress( arg1, "FcStrSetAddFilename - arg1 (s)");
		validate_NULL_TYPETYPE(  arg1, "FcStrSetAddFilename - arg1 (s)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

