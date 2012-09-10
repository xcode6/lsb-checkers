// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcAtomicDestroy
static void(*funcptr) (FcAtomic * ) = 0;

extern int __lsb_check_params;
void FcAtomicDestroy (FcAtomic * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for FcAtomicDestroy()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcAtomicDestroy");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcAtomicDestroy. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcAtomicDestroy() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "FcAtomicDestroy - arg0 (atomic)");
		}
		validate_NULL_TYPETYPE(  arg0, "FcAtomicDestroy - arg0 (atomic)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

