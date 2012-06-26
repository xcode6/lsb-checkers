// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <nss3/secmodt.h>
#include <nss3/pk11pub.h>
#undef PK11_IsHW
static PRBool(*funcptr) (PK11SlotInfo * ) = 0;

extern int __lsb_check_params;
PRBool PK11_IsHW (PK11SlotInfo * arg0 )
{
	int reset_flag = __lsb_check_params;
	PRBool ret_value  ;
	__lsb_output(4, "Invoking wrapper for PK11_IsHW()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "PK11_IsHW", "NSS_3.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load PK11_IsHW. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "PK11_IsHW() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "PK11_IsHW - arg0 (slot)");
		}
		validate_NULL_TYPETYPE(  arg0, "PK11_IsHW - arg0 (slot)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

