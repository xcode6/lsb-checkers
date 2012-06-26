// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_coverage_set
static void(*funcptr) (PangoCoverage * , int , PangoCoverageLevel ) = 0;

extern int __lsb_check_params;
void pango_coverage_set (PangoCoverage * arg0 , int arg1 , PangoCoverageLevel arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for pango_coverage_set()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_coverage_set");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_coverage_set. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_coverage_set() - validating");
		validate_RWaddress( arg0, "pango_coverage_set - arg0 (coverage)");
		validate_NULL_TYPETYPE(  arg0, "pango_coverage_set - arg0 (coverage)");
		validate_NULL_TYPETYPE(  arg1, "pango_coverage_set - arg1 (index_)");
		validate_NULL_TYPETYPE(  arg2, "pango_coverage_set - arg2 (level)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

