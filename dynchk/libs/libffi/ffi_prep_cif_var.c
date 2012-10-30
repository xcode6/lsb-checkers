// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <ffi.h>
#include <ffitarget.h>
#undef ffi_prep_cif_var
static ffi_status(*funcptr) (ffi_cif * , ffi_abi , unsigned int , unsigned int , ffi_type * , ffi_type * * ) = 0;

extern int __lsb_check_params;
ffi_status ffi_prep_cif_var (ffi_cif * arg0 , ffi_abi arg1 , unsigned int arg2 , unsigned int arg3 , ffi_type * arg4 , ffi_type * * arg5 )
{
	int reset_flag = __lsb_check_params;
	ffi_status ret_value  ;
	__lsb_output(4, "Invoking wrapper for ffi_prep_cif_var()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ffi_prep_cif_var");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load ffi_prep_cif_var. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "ffi_prep_cif_var() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "ffi_prep_cif_var - arg0 (cif)");
		}
		validate_NULL_TYPETYPE(  arg0, "ffi_prep_cif_var - arg0 (cif)");
		validate_NULL_TYPETYPE(  arg1, "ffi_prep_cif_var - arg1 (abi)");
		validate_NULL_TYPETYPE(  arg2, "ffi_prep_cif_var - arg2 (nfixedargs)");
		validate_NULL_TYPETYPE(  arg3, "ffi_prep_cif_var - arg3 (ntotalargs)");
		if( arg4 ) {
		validate_RWaddress( arg4, "ffi_prep_cif_var - arg4 (rtype)");
		}
		validate_NULL_TYPETYPE(  arg4, "ffi_prep_cif_var - arg4 (rtype)");
		if( arg5 ) {
		validate_RWaddress( arg5, "ffi_prep_cif_var - arg5 (atypes)");
		}
		validate_NULL_TYPETYPE(  arg5, "ffi_prep_cif_var - arg5 (atypes)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

