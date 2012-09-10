// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcPatternAddCharSet
static FcBool(*funcptr) (FcPattern * , const char * , const FcCharSet * ) = 0;

extern int __lsb_check_params;
FcBool FcPatternAddCharSet (FcPattern * arg0 , const char * arg1 , const FcCharSet * arg2 )
{
	int reset_flag = __lsb_check_params;
	FcBool ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcPatternAddCharSet()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcPatternAddCharSet");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcPatternAddCharSet. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcPatternAddCharSet() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "FcPatternAddCharSet - arg0 (p)");
		}
		validate_NULL_TYPETYPE(  arg0, "FcPatternAddCharSet - arg0 (p)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "FcPatternAddCharSet - arg1 (object)");
		}
		validate_NULL_TYPETYPE(  arg1, "FcPatternAddCharSet - arg1 (object)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "FcPatternAddCharSet - arg2 (c)");
		}
		validate_NULL_TYPETYPE(  arg2, "FcPatternAddCharSet - arg2 (c)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

