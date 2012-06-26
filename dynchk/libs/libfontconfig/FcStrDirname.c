// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcStrDirname
static FcChar8 *(*funcptr) (const FcChar8 * ) = 0;

extern int __lsb_check_params;
FcChar8 * FcStrDirname (const FcChar8 * arg0 )
{
	int reset_flag = __lsb_check_params;
	FcChar8 * ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcStrDirname()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcStrDirname");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcStrDirname. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcStrDirname() - validating");
		validate_Rdaddress( arg0, "FcStrDirname - arg0 (file)");
		validate_NULL_TYPETYPE(  arg0, "FcStrDirname - arg0 (file)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

