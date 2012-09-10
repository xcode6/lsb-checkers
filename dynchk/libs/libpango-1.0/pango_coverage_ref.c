// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_coverage_ref
static PangoCoverage *(*funcptr) (PangoCoverage * ) = 0;

extern int __lsb_check_params;
PangoCoverage * pango_coverage_ref (PangoCoverage * arg0 )
{
	int reset_flag = __lsb_check_params;
	PangoCoverage * ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_coverage_ref()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_coverage_ref");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_coverage_ref. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_coverage_ref() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_coverage_ref - arg0 (coverage)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_coverage_ref - arg0 (coverage)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

