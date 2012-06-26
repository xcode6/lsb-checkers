// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcPatternGetCharSet
static FcResult(*funcptr) (const FcPattern * , const char * , int , FcCharSet * * ) = 0;

extern int __lsb_check_params;
FcResult FcPatternGetCharSet (const FcPattern * arg0 , const char * arg1 , int arg2 , FcCharSet * * arg3 )
{
	int reset_flag = __lsb_check_params;
	FcResult ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcPatternGetCharSet()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcPatternGetCharSet");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcPatternGetCharSet. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcPatternGetCharSet() - validating");
		validate_Rdaddress( arg0, "FcPatternGetCharSet - arg0 (p)");
		validate_NULL_TYPETYPE(  arg0, "FcPatternGetCharSet - arg0 (p)");
		validate_Rdaddress( arg1, "FcPatternGetCharSet - arg1 (object)");
		validate_NULL_TYPETYPE(  arg1, "FcPatternGetCharSet - arg1 (object)");
		validate_NULL_TYPETYPE(  arg2, "FcPatternGetCharSet - arg2 (n)");
		validate_RWaddress( arg3, "FcPatternGetCharSet - arg3 (c)");
		validate_NULL_TYPETYPE(  arg3, "FcPatternGetCharSet - arg3 (c)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

