// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_coverage_get
static PangoCoverageLevel(*funcptr) (PangoCoverage * , int ) = 0;

extern int __lsb_check_params;
PangoCoverageLevel pango_coverage_get (PangoCoverage * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	PangoCoverageLevel ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_coverage_get()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_coverage_get");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_coverage_get. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_coverage_get() - validating");
		validate_RWaddress( arg0, "pango_coverage_get - arg0 (coverage)");
		validate_NULL_TYPETYPE(  arg0, "pango_coverage_get - arg0 (coverage)");
		validate_NULL_TYPETYPE(  arg1, "pango_coverage_get - arg1 (index_)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

