// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cups/raster.h>
#undef cupsRasterWriteHeader
static unsigned int(*funcptr) (cups_raster_t * , cups_page_header_t * ) = 0;

extern int __lsb_check_params;
unsigned int cupsRasterWriteHeader (cups_raster_t * arg0 , cups_page_header_t * arg1 )
{
	int reset_flag = __lsb_check_params;
	unsigned int ret_value  ;
	__lsb_output(4, "Invoking wrapper for cupsRasterWriteHeader()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cupsRasterWriteHeader");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cupsRasterWriteHeader. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cupsRasterWriteHeader() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cupsRasterWriteHeader - arg0 (r)");
		}
		validate_NULL_TYPETYPE(  arg0, "cupsRasterWriteHeader - arg0 (r)");
		if( arg1 ) {
		validate_RWaddress( arg1, "cupsRasterWriteHeader - arg1 (h)");
		}
		validate_NULL_TYPETYPE(  arg1, "cupsRasterWriteHeader - arg1 (h)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
