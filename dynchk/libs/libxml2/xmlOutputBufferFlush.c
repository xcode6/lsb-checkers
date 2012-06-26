// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlIO.h>
#undef xmlOutputBufferFlush
static int(*funcptr) (xmlOutputBufferPtr ) = 0;

extern int __lsb_check_params;
int xmlOutputBufferFlush (xmlOutputBufferPtr arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlOutputBufferFlush()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlOutputBufferFlush", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlOutputBufferFlush. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlOutputBufferFlush() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlOutputBufferFlush - arg0 (out)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

