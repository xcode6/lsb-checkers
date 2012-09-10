// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcStrCmpIgnoreCase
static int(*funcptr) (const FcChar8 * , const FcChar8 * ) = 0;

extern int __lsb_check_params;
int FcStrCmpIgnoreCase (const FcChar8 * arg0 , const FcChar8 * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcStrCmpIgnoreCase()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcStrCmpIgnoreCase");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcStrCmpIgnoreCase. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcStrCmpIgnoreCase() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "FcStrCmpIgnoreCase - arg0 (s1)");
		}
		validate_NULL_TYPETYPE(  arg0, "FcStrCmpIgnoreCase - arg0 (s1)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "FcStrCmpIgnoreCase - arg1 (s2)");
		}
		validate_NULL_TYPETYPE(  arg1, "FcStrCmpIgnoreCase - arg1 (s2)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

