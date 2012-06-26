// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#undef xmlBufferCCat
static int(*funcptr) (xmlBufferPtr , const char * ) = 0;

extern int __lsb_check_params;
int xmlBufferCCat (xmlBufferPtr arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlBufferCCat()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlBufferCCat", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlBufferCCat. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlBufferCCat() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlBufferCCat - arg0 (buf)");
		validate_Rdaddress( arg1, "xmlBufferCCat - arg1 (str)");
		validate_NULL_TYPETYPE(  arg1, "xmlBufferCCat - arg1 (str)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

