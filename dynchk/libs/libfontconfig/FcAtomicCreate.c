// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcAtomicCreate
static FcAtomic *(*funcptr) (const FcChar8 * ) = 0;

extern int __lsb_check_params;
FcAtomic * FcAtomicCreate (const FcChar8 * arg0 )
{
	int reset_flag = __lsb_check_params;
	FcAtomic * ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcAtomicCreate()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcAtomicCreate");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcAtomicCreate. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcAtomicCreate() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "FcAtomicCreate - arg0 (file)");
		}
		validate_NULL_TYPETYPE(  arg0, "FcAtomicCreate - arg0 (file)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
