// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#undef xmlSaveFileTo
static int(*funcptr) (xmlOutputBufferPtr , xmlDocPtr , const char * ) = 0;

extern int __lsb_check_params;
int xmlSaveFileTo (xmlOutputBufferPtr arg0 , xmlDocPtr arg1 , const char * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlSaveFileTo()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlSaveFileTo", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlSaveFileTo. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlSaveFileTo() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlSaveFileTo - arg0 (buf)");
		validate_NULL_TYPETYPE(  arg1, "xmlSaveFileTo - arg1 (cur)");
		validate_Rdaddress( arg2, "xmlSaveFileTo - arg2 (encoding)");
		validate_NULL_TYPETYPE(  arg2, "xmlSaveFileTo - arg2 (encoding)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

