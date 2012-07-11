// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlIO.h>
#undef xmlFileRead
static int(*funcptr) (void * , char * , int ) = 0;

extern int __lsb_check_params;
int xmlFileRead (void * arg0 , char * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlFileRead()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlFileRead", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlFileRead. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlFileRead() - validating");
		validate_RWaddress( arg0, "xmlFileRead - arg0 (context)");
		validate_NULL_TYPETYPE(  arg0, "xmlFileRead - arg0 (context)");
		validate_RWaddress( arg1, "xmlFileRead - arg1 (buffer)");
		validate_NULL_TYPETYPE(  arg1, "xmlFileRead - arg1 (buffer)");
		validate_NULL_TYPETYPE(  arg2, "xmlFileRead - arg2 (len)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
