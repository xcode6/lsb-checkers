// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <ffi.h>
#undef ffi_raw_to_ptrarray
static void(*funcptr) (ffi_cif * , ffi_raw * , void * * ) = 0;

extern int __lsb_check_params;
void ffi_raw_to_ptrarray (ffi_cif * arg0 , ffi_raw * arg1 , void * * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for ffi_raw_to_ptrarray()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ffi_raw_to_ptrarray");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load ffi_raw_to_ptrarray. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "ffi_raw_to_ptrarray() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "ffi_raw_to_ptrarray - arg0 (cif)");
		}
		validate_NULL_TYPETYPE(  arg0, "ffi_raw_to_ptrarray - arg0 (cif)");
		if( arg1 ) {
		validate_RWaddress( arg1, "ffi_raw_to_ptrarray - arg1 (raw)");
		}
		validate_NULL_TYPETYPE(  arg1, "ffi_raw_to_ptrarray - arg1 (raw)");
		if( arg2 ) {
		validate_RWaddress( arg2, "ffi_raw_to_ptrarray - arg2 (args)");
		}
		validate_NULL_TYPETYPE(  arg2, "ffi_raw_to_ptrarray - arg2 (args)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

