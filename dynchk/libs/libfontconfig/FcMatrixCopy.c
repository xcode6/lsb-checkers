// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcMatrixCopy
static FcMatrix *(*funcptr) (const FcMatrix * ) = 0;

extern int __lsb_check_params;
FcMatrix * FcMatrixCopy (const FcMatrix * arg0 )
{
	int reset_flag = __lsb_check_params;
	FcMatrix * ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcMatrixCopy()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcMatrixCopy");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcMatrixCopy. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcMatrixCopy() - validating");
		validate_Rdaddress( arg0, "FcMatrixCopy - arg0 (mat)");
		validate_NULL_TYPETYPE(  arg0, "FcMatrixCopy - arg0 (mat)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

