// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcPatternCreate
static FcPattern *(*funcptr) () = 0;

extern int __lsb_check_params;
FcPattern * FcPatternCreate ()
{
	int reset_flag = __lsb_check_params;
	FcPattern * ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcPatternCreate()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcPatternCreate");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcPatternCreate. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcPatternCreate() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

