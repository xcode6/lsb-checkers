// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cups/cups.h>
#undef cupsFreeDests
static void(*funcptr) (int , cups_dest_t * ) = 0;

extern int __lsb_check_params;
void cupsFreeDests (int arg0 , cups_dest_t * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for cupsFreeDests()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cupsFreeDests");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cupsFreeDests. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cupsFreeDests() - validating");
		validate_NULL_TYPETYPE(  arg0, "cupsFreeDests - arg0 (num_dests)");
		if( arg1 ) {
		validate_RWaddress( arg1, "cupsFreeDests - arg1 (dests)");
		}
		validate_NULL_TYPETYPE(  arg1, "cupsFreeDests - arg1 (dests)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}
