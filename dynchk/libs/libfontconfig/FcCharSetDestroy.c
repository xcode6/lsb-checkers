// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcCharSetDestroy
static void(*funcptr) (FcCharSet * ) = 0;

extern int __lsb_check_params;
void FcCharSetDestroy (FcCharSet * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for FcCharSetDestroy()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcCharSetDestroy");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcCharSetDestroy. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcCharSetDestroy() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "FcCharSetDestroy - arg0 (fcs)");
		}
		validate_NULL_TYPETYPE(  arg0, "FcCharSetDestroy - arg0 (fcs)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

