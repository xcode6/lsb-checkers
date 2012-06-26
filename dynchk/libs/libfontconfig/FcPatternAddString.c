// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcPatternAddString
static FcBool(*funcptr) (FcPattern * , const char * , const FcChar8 * ) = 0;

extern int __lsb_check_params;
FcBool FcPatternAddString (FcPattern * arg0 , const char * arg1 , const FcChar8 * arg2 )
{
	int reset_flag = __lsb_check_params;
	FcBool ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcPatternAddString()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcPatternAddString");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcPatternAddString. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcPatternAddString() - validating");
		validate_RWaddress( arg0, "FcPatternAddString - arg0 (p)");
		validate_NULL_TYPETYPE(  arg0, "FcPatternAddString - arg0 (p)");
		validate_Rdaddress( arg1, "FcPatternAddString - arg1 (object)");
		validate_NULL_TYPETYPE(  arg1, "FcPatternAddString - arg1 (object)");
		validate_Rdaddress( arg2, "FcPatternAddString - arg2 (s)");
		validate_NULL_TYPETYPE(  arg2, "FcPatternAddString - arg2 (s)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

