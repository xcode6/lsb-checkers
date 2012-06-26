// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cups/cups.h>
#include <cups/ipp.h>
#undef ippWrite
static ipp_state_t(*funcptr) (http_t * , ipp_t * ) = 0;

extern int __lsb_check_params;
ipp_state_t ippWrite (http_t * arg0 , ipp_t * arg1 )
{
	int reset_flag = __lsb_check_params;
	ipp_state_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for ippWrite()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ippWrite");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load ippWrite. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "ippWrite() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "ippWrite - arg0 (http)");
		}
		validate_NULL_TYPETYPE(  arg0, "ippWrite - arg0 (http)");
		if( arg1 ) {
		validate_RWaddress( arg1, "ippWrite - arg1 (ipp)");
		}
		validate_NULL_TYPETYPE(  arg1, "ippWrite - arg1 (ipp)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

