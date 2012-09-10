// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcPatternGetString
static FcResult(*funcptr) (const FcPattern * , const char * , int , FcChar8 * * ) = 0;

extern int __lsb_check_params;
FcResult FcPatternGetString (const FcPattern * arg0 , const char * arg1 , int arg2 , FcChar8 * * arg3 )
{
	int reset_flag = __lsb_check_params;
	FcResult ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcPatternGetString()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcPatternGetString");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcPatternGetString. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcPatternGetString() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "FcPatternGetString - arg0 (p)");
		}
		validate_NULL_TYPETYPE(  arg0, "FcPatternGetString - arg0 (p)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "FcPatternGetString - arg1 (object)");
		}
		validate_NULL_TYPETYPE(  arg1, "FcPatternGetString - arg1 (object)");
		validate_NULL_TYPETYPE(  arg2, "FcPatternGetString - arg2 (n)");
		if( arg3 ) {
		validate_RWaddress( arg3, "FcPatternGetString - arg3 (s)");
		}
		validate_NULL_TYPETYPE(  arg3, "FcPatternGetString - arg3 (s)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

