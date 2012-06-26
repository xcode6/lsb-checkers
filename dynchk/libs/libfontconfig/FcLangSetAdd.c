// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcLangSetAdd
static FcBool(*funcptr) (FcLangSet * , const FcChar8 * ) = 0;

extern int __lsb_check_params;
FcBool FcLangSetAdd (FcLangSet * arg0 , const FcChar8 * arg1 )
{
	int reset_flag = __lsb_check_params;
	FcBool ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcLangSetAdd()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcLangSetAdd");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcLangSetAdd. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcLangSetAdd() - validating");
		validate_RWaddress( arg0, "FcLangSetAdd - arg0 (ls)");
		validate_NULL_TYPETYPE(  arg0, "FcLangSetAdd - arg0 (ls)");
		validate_Rdaddress( arg1, "FcLangSetAdd - arg1 (lang)");
		validate_NULL_TYPETYPE(  arg1, "FcLangSetAdd - arg1 (lang)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

