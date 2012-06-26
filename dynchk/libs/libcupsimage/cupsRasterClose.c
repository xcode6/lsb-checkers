// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cups/raster.h>
#undef cupsRasterClose
static void(*funcptr) (cups_raster_t * ) = 0;

extern int __lsb_check_params;
void cupsRasterClose (cups_raster_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for cupsRasterClose()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cupsRasterClose");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cupsRasterClose. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cupsRasterClose() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cupsRasterClose - arg0 (r)");
		}
		validate_NULL_TYPETYPE(  arg0, "cupsRasterClose - arg0 (r)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

