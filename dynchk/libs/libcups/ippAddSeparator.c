// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cups/ipp.h>
#undef ippAddSeparator
static ipp_attribute_t *(*funcptr) (ipp_t * ) = 0;

extern int __lsb_check_params;
ipp_attribute_t * ippAddSeparator (ipp_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	ipp_attribute_t * ret_value  ;
	__lsb_output(4, "Invoking wrapper for ippAddSeparator()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ippAddSeparator");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load ippAddSeparator. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "ippAddSeparator() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "ippAddSeparator - arg0 (ipp)");
		}
		validate_NULL_TYPETYPE(  arg0, "ippAddSeparator - arg0 (ipp)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

