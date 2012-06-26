// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#undef xmlGetBufferAllocationScheme
static xmlBufferAllocationScheme(*funcptr) () = 0;

extern int __lsb_check_params;
xmlBufferAllocationScheme xmlGetBufferAllocationScheme ()
{
	int reset_flag = __lsb_check_params;
	xmlBufferAllocationScheme ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlGetBufferAllocationScheme()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlGetBufferAllocationScheme", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlGetBufferAllocationScheme. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlGetBufferAllocationScheme() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

