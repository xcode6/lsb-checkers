// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <freetype/ftstroke.h>
#undef FT_Stroker_Done
static void(*funcptr) (FT_Stroker ) = 0;

extern int __lsb_check_params;
void FT_Stroker_Done (FT_Stroker arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for FT_Stroker_Done()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FT_Stroker_Done");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FT_Stroker_Done. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FT_Stroker_Done() - validating");
		validate_NULL_TYPETYPE(  arg0, "FT_Stroker_Done - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}
