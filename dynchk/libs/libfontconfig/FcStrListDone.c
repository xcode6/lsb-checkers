// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcStrListDone
static void(*funcptr) (FcStrList * ) = 0;

extern int __lsb_check_params;
void FcStrListDone (FcStrList * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for FcStrListDone()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcStrListDone");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcStrListDone. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcStrListDone() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "FcStrListDone - arg0 (list)");
		}
		validate_NULL_TYPETYPE(  arg0, "FcStrListDone - arg0 (list)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

