// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/list.h>
#undef xmlListAppend
static int(*funcptr) (xmlListPtr , void * ) = 0;

extern int __lsb_check_params;
int xmlListAppend (xmlListPtr arg0 , void * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlListAppend()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlListAppend", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlListAppend. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlListAppend() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlListAppend - arg0 (l)");
		validate_RWaddress( arg1, "xmlListAppend - arg1 (data)");
		validate_NULL_TYPETYPE(  arg1, "xmlListAppend - arg1 (data)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

