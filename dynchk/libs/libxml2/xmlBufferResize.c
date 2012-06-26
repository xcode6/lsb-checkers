// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#undef xmlBufferResize
static int(*funcptr) (xmlBufferPtr , unsigned int ) = 0;

extern int __lsb_check_params;
int xmlBufferResize (xmlBufferPtr arg0 , unsigned int arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlBufferResize()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlBufferResize", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlBufferResize. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlBufferResize() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlBufferResize - arg0 (buf)");
		validate_NULL_TYPETYPE(  arg1, "xmlBufferResize - arg1 (size)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

