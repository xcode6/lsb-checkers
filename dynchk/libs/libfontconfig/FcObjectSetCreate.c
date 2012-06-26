// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcObjectSetCreate
static FcObjectSet *(*funcptr) () = 0;

extern int __lsb_check_params;
FcObjectSet * FcObjectSetCreate ()
{
	int reset_flag = __lsb_check_params;
	FcObjectSet * ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcObjectSetCreate()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcObjectSetCreate");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcObjectSetCreate. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcObjectSetCreate() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

