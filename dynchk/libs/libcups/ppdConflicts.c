// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cups/cups.h>
#include <cups/ppd.h>
#undef ppdConflicts
static int(*funcptr) (ppd_file_t * ) = 0;

extern int __lsb_check_params;
int ppdConflicts (ppd_file_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for ppdConflicts()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ppdConflicts");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load ppdConflicts. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "ppdConflicts() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "ppdConflicts - arg0 (ppd)");
		}
		validate_NULL_TYPETYPE(  arg0, "ppdConflicts - arg0 (ppd)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
